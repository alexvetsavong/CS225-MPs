/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>
#include <cmath>

using namespace std;

template <int Dim>
bool KDTree<Dim>::smallerDimVal(const Point<Dim>& first,
                                const Point<Dim>& second, int curDim) const
{
    /**
     * @todo Implement this function!
     */

     if (first[curDim] < second[curDim]) return true;

     if (first[curDim] > second[curDim]) return false;

     if (first[curDim] == second[curDim]){
       if (first < second) return true;
       else return false;
     }

    return false;
}

template <int Dim>
double KDTree<Dim>::findDistance(const Point<Dim>& start, const Point<Dim>& end) const {
  double sq_distance = 0.0;
  for (int i = 0; i < Dim; i++){
    sq_distance += ((start[i] - end[i]) * (start[i] - end[i]));
  }
  return sq_distance;
}

template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim>& target,
                                const Point<Dim>& currentBest,
                                const Point<Dim>& potential) const
{
    /**
     * @todo Implement this function!
     */

     if (findDistance(target,currentBest) < findDistance(target,potential)) return false;
     if (findDistance(target,currentBest) > findDistance(target,potential)) return true;
     if (findDistance(target,currentBest) == findDistance(target,potential)){
       if (currentBest < potential) return false;
       else return true;
     }

     return false;
}

template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>>& newPoints)
{
    /**
     * @todo Implement this function!
     */

     points = newPoints; //p is private member vector of points

     size = points.size(); //# of nodes

     if (size < 1) //null case
       root = NULL;

     else
       root = build(0, points.size() - 1, 0); //helper function call

}

template <int Dim>
typename KDTree<Dim>::KDTreeNode* KDTree<Dim>::build(unsigned a, unsigned b, unsigned d) {
    //base case
    if (a < 0 || a > points.size() || a > b || b < 0 || b > points.size())
      return NULL;

    unsigned m = floor((a+b)/2); //middle
    Point<Dim> r = quickselect(a, b, m, d);

    KDTreeNode* curr = new KDTreeNode(r);    //build current node
    curr -> left = build(a, m-1, (d+1)%Dim); //recursively call children nodes
    curr -> right = build(m+1, b, (d+1)%Dim);
    return curr; //return root

}

template <int Dim>
unsigned KDTree<Dim>::partition(unsigned a, unsigned b, unsigned d, unsigned pivotIndex) {
    Point<Dim> pivotValue = points[pivotIndex]; //pivot value

    points[pivotIndex] = points[b]; //swap
    points[b] = pivotValue;

    unsigned storeIndex = a; //left

    //first loop
    for (unsigned i = a; i <= b-1; i++) {
      if (smallerDimVal(points[i], pivotValue, d)) {
        std::swap(points[i], points[storeIndex]);
        storeIndex++;
      }
    }

    std::swap(points[b], points[storeIndex]);

    //return final index
    return storeIndex;
}

template <int Dim>
Point<Dim> KDTree<Dim>::quickselect(unsigned a, unsigned b, unsigned k, unsigned d) {
    if (a == b) { //base case
      return points[a];
    }

    //gets middle by quickselect
    unsigned pivotIndex = floor((a+b)/2);
    pivotIndex = partition(a, b, d, pivotIndex);

    //found value
    if (k == pivotIndex) {
      return points[k];
    }

    //recursive calls into left and right partitions
    else if (k < pivotIndex)
      return quickselect(a, pivotIndex - 1, k, d);

    else
      return quickselect(pivotIndex + 1, b, k, d);
}

template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  /**
   * @todo Implement this function!
   */

   _copy(other); //copy helper
}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */

  if (this != &rhs) {
    _destroy(root); //destroy helper
    _copy(rhs); //copy helper
  }

  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {
  /**
   * @todo Implement this function!
   */

   _destroy(root); //destroy helper
}

template <int Dim>
void KDTree<Dim>::_destroy(KDTreeNode * subroot) {
    if (subroot == NULL) //base case
      return;

    //recursive calls
    _destroy(subroot -> left);
    _destroy(subroot -> right);
    delete subroot; //delete current node
}

template <int Dim>
void KDTree<Dim>::_copy(const KDTree<Dim>& other) {
    size = other.size;
    root = _copy(other.root); //copies tree helper function
}

template <int Dim>
typename KDTree<Dim>::KDTreeNode* KDTree<Dim>::_copy(KDTreeNode * subroot) {
    if (subroot == NULL) //base case
      return NULL;

    KDTreeNode* curr = new KDTreeNode(subroot -> point); //create node
    curr -> left = _copy(subroot -> left); //recursive calls
    curr -> right = _copy(subroot -> right);

    return curr; //return root
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */

    //get the closest node
    KDTreeNode* nearest = find(0, query, root, NULL);

    //reurn the closest node's point
    return nearest -> point;
}

template <int Dim>
typename KDTree<Dim>::KDTreeNode* KDTree<Dim>::find(unsigned d, const Point<Dim>& query, KDTreeNode* subRoot, KDTreeNode* currentBest) const {

  //found query or hit leaf node
  if (subRoot -> point == query || (subRoot -> left == NULL && subRoot -> right == NULL))
    return subRoot;

  //traverse left subtree
  else if (smallerDimVal(query, subRoot -> point, d)) {
    //if left is not null, traverse left tree, otherwise make the current best the current subroot
    currentBest = (subRoot -> left != NULL) ? find((d+1)%Dim, query, subRoot -> left, currentBest) : subRoot;

    //once unwound from recursion, if current subroot is closer than current best, make it the new best
    if (shouldReplace(query, currentBest -> point, subRoot -> point))
      currentBest = subRoot;

    //calculate the distance between the current best and query
    double currDist = findDistance(query, currentBest -> point);

    //traverse the right subtree if it's not null, and the dimension difference is less than the current best distance
    if (subRoot -> right != NULL && pow(query[d] - subRoot -> point[d], 2) <= currDist) {
      //recursively call children
      KDTreeNode* otherSide = find((d+1)%Dim, query, subRoot -> right, currentBest);
      Point<Dim> other = otherSide -> point;

      //if the other side has a closer node, make it the new best
      if (shouldReplace(query, currentBest -> point, other))
        currentBest = otherSide;
    }
  }

  //traverse right subtree
  else {
    //if right is not null, traverse right tree, otherwise make the current best the current subroot
    currentBest = (subRoot -> right != NULL) ? find((d+1)%Dim, query, subRoot -> right, currentBest) : subRoot;

    //once unwound from recursion, if current subroot is closer than current best, make it the new best
    if (shouldReplace(query, currentBest -> point, subRoot -> point))
      currentBest = subRoot;

    //calculate the distance between the current best and query
    double currDist = findDistance(query, currentBest -> point);

    //traverse the left subtree if it's not null, and the dimension difference is less than the current best distance
    if (subRoot -> left != NULL && pow(query[d] - subRoot -> point[d], 2) <= currDist) {
      //recursively call children
      KDTreeNode* otherSide = find((d+1)%Dim, query, subRoot -> left, currentBest);
      Point<Dim> other = otherSide -> point;

      //if the other side has a closer node, make it the new best
      if (shouldReplace(query, currentBest -> point, other))
        currentBest = otherSide;
    }
  }

  //return the closest node
  return currentBest;
}
