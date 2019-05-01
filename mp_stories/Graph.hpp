#include "Graph.h"
#include "Edge.h"
#include "Vertex.h"

#include <string>
#include <iostream>

/**
* @return The number of vertices in the Graph
*/
template <class V, class E>
unsigned int Graph<V,E>::numVertices() const {
  // TODO: Part 2
  return vertexMap.size();
}


/**
* The degree of the vertex. For directed: Sum of in-degree and out-degree
* @return Returns the degree of a given vertex.
* @param v Given vertex to return degree.
*/
template <class V, class E>
unsigned int Graph<V,E>::degree(const V & v) const {
  // TODO: Part 2

  // dummy edge for checking if graph is directed or not
  E e(v,v);

  // used to keep track of how many edges have v as a destination
  unsigned int degree = 0;

  // if graph is directed, keep track of how many edges end with v
  if (e.directed()){
    for (E_byRef x : edgeList) {
      if (x.get().dest() == v) degree++;
    }
  }

  if (adjList.find(v.key()) != adjList.end())   // check if vertex is a source of any edges
    return degree + adjList.at(v.key()).size(); // if it is, return in-degree + out-degree;
  else return degree; // otherwise return only the in-degree
}


/**
* Inserts a Vertex into the Graph.
* @param key The key of the Vertex to insert
* @return The inserted Vertex
*/
template <class V, class E>
V & Graph<V,E>::insertVertex(std::string key) {
  // TODO: Part 2
  V & v = *(new V(key));
  vertexMap.emplace(key, std::ref(v));
  return v;
}


/**
* Removes a given Vertex
* @param v The Vertex to remove
*/
template <class V, class E>
void Graph<V,E>::removeVertex(const std::string & key) {
  // TODO: Part 2
  adjList.erase(key);
  vertexMap.erase(key);
}


/**
* Inserts an Edge into the Graph.
* @param v1 The source Vertex
* @param v2 The destination Vertex
* @return The inserted Edge
*/
template <class V, class E>
E & Graph<V,E>::insertEdge(const V & v1, const V & v2) {
  // TODO: Part 2
  E & e = *(new E(v1, v2));

  edgeList.push_front(std::ref(e));

  typename std::unordered_map<std::string, std::list<edgeListIter>>::iterator
    it = adjList.find(v1.key());

  // if the key is not in the adjacency list, create a new pair and place it in there
  if (it == adjList.end()) {
    std::list<edgeListIter> incidentEdges;
    incidentEdges.push_front(edgeList.begin());
    adjList.emplace(v1.key(), incidentEdges);
  }

  // otherwise, just push the new edge into the list associated with vertex
  else {
    it->second.push_front(edgeList.begin());
  }

  // if the edge is undirected, do the same as above with swapped endpoints
  if (!e.directed()) {
    it = adjList.find(v2.key());

    if (it == adjList.end()) {
      std::list<edgeListIter> incidentEdges;
      incidentEdges.push_front(edgeList.begin());
      adjList.emplace(v2.key(), incidentEdges);
    }

    else {
      it->second.push_front(edgeList.begin());
    }
  }

  return e;
}


/**
* Removes an Edge from the Graph. Consider both the undirected and directed cases.
* min(degree(key1), degree(key2))
* @param key1 The key of the source Vertex
* @param key2 The key of the destination Vertex
*/
template <class V, class E>
void Graph<V,E>::removeEdge(const std::string key1, const std::string key2) {
  // TODO: Part 2
}


/**
* Removes an Edge from the Graph given by the location of the given iterator into the edge list.
* @param it An iterator at the location of the Edge that
* you would like to remove
*/
template <class V, class E>
void Graph<V,E>::removeEdge(const edgeListIter & it) {
  // TODO: Part 2
}


/**
* Return the list of incident edges from a given vertex.
* For the directed case, consider all edges that has the vertex as either a source or destination.
* @param key The key of the given vertex
* @return The list edges (by reference) that are adjacent to the given vertex
*/
template <class V, class E>
const std::list<std::reference_wrapper<E>> Graph<V,E>::incidentEdges(const std::string key) const {
  // TODO: Part 2
  std::list<E_byRef> edges;

  E dummy = E(V(key),V(key));

  if (adjList.find(key) != adjList.end()) {
    for (edgeListIter it : adjList.at(key)) {
      edges.push_front(*it);
    }
  }

  if (dummy.directed()) {
    for (E_byRef e : edgeList) {
      if (e.get().dest().key() == key)
        edges.push_front(std::ref(e));
    }
  }

  return edges;
}


/**
* Return whether the two vertices are adjacent to one another. Consider both the undirected and directed cases.
* When the graph is directed, v1 and v2 are only adjacent if there is an edge from v1 to v2.
* @param key1 The key of the source Vertex
* @param key2 The key of the destination Vertex
* @return True if v1 is adjacent to v2, False otherwise
*/
template <class V, class E>
bool Graph<V,E>::isAdjacent(const std::string key1, const std::string key2) const {
  // TODO: Part 2
  V v1 = V(key1);
  V v2 = V(key2);
  E dummy = E(V(key1),V(key1));

  if (!dummy.directed()) {
    if (degree(v1) <= degree(v2) && adjList.find(key1) != adjList.end()) {
      for (edgeListIter e : adjList.at(key1)) {
        if (e->get().source().key() == key2 || e->get().dest().key() == key2)
          return true;
      }
    }
    else {
      for (edgeListIter e : adjList.at(key2)) {
        if (e->get().source().key() == key1 || e->get().dest().key() == key1)
          return true;
      }
    }
  }

  else {
    if (adjList.find(key1) != adjList.end()) {
      for (edgeListIter e : adjList.at(key1)) {
        if (e->get().source().key() == key2 || e->get().dest().key() == key2)
        return true;
      }
    }
  }

  return false;
}
