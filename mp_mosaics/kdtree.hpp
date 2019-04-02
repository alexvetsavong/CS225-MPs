/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>

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



}

template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  /**
   * @todo Implement this function!
   */
}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */

  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {
  /**
   * @todo Implement this function!
   */
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */

    return Point<Dim>();
}
