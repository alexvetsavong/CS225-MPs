#include "Graph.h"
#include "Edge.h"
#include "Vertex.h"

#include <string>
#include <iostream>
#include <list>
#include <utility>

using std::list;
using std::pair;
using std::string;

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
  return adjList.at(v.key()).size();
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

  pair<string, V_byRef> defVertex(key, v);
  pair<string, list<edgeListIter>> defAdj(key, list<edgeListIter>());

  vertexMap.insert(defVertex);
  adjList.insert(defAdj);

  return v;
}


/**
* Removes a given Vertex
* @param v The Vertex to remove
*/
template <class V, class E>
void Graph<V,E>::removeVertex(const std::string & key) {
  // TODO: Part 2
  list<E_byRef> edges = incidentEdges(key);

  for (auto it = edges.begin(); it != edges.end(); it++)
    removeEdge((*it).get().source(), (*it).get().dest());

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

  edgeList.push_front(e);

  auto edgeItr = edgeList.begin();
  string first = v1.key();
  string second = v2.key();

  adjList.at(first).push_front(edgeItr);
  adjList.at(second).push_front(edgeItr);

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
  if (!isAdjacent(key1, key2))
    return;

  E_byRef origEdge = *(edgeList.begin());
  bool directed = (origEdge.get().directed()) ? true : false;
  V_byRef v1 = vertexMap.at(key1);
  V_byRef v2 = vertexMap.at(key2);

  if (directed) {
    for (auto it = adjList.at(key1).begin(); it != adjList.at(key1).end(); it++) {
      if ((**it).get().source() == v1 && (**it).get().dest() == v2) {
        for (auto it2 = adjList.at(key2).begin(); it2 != adjList.at(key2).end(); it2++) {
          if ((**it2).get().source() == v1 && (**it2).get().dest() == v2) {
            adjList.at(key2).erase(it2);
            break;
          }
        }
        edgeList.erase(*it);
        adjList.at(key1).erase(it);
        break;
      }
    }
  }

  else {
    for (auto it = adjList.at(key1).begin(); it != adjList.at(key1).end(); it++) {
      if ((**it).get().source() == v1 && (**it).get().dest() == v2) {
        for (auto it2 = adjList.at(key2).begin(); it2 != adjList.at(key2).end(); it2++) {
          if ((**it2).get().source() == v1 && (**it2).get().dest() == v2) {
            adjList.at(key2).erase(it2);
            break;
          }
        }
        edgeList.erase(*it);
        adjList.at(key1).erase(it);
        break;
      }

      else if ((**it).get().source() == v2 && (**it).get().dest() == v1) {
        for (auto it2 = adjList.at(key2).begin(); it2 != adjList.at(key2).end(); it2++) {
          if ((**it2).get().source() == v2 && (**it2).get().dest() == v1) {
            adjList.at(key2).erase(it2);
            break;
          }
        }
        edgeList.erase(*it);
        adjList.at(key1).erase(it);
        break;
      }
    }
  }
}


/**
* Removes an Edge from the Graph given by the location of the given iterator into the edge list.
* @param it An iterator at the location of the Edge that
* you would like to remove
*/
template <class V, class E>
void Graph<V,E>::removeEdge(const edgeListIter & it) {
  // TODO: Part 2
  E & edge = (*it).get();
  bool directed = (edge.directed()) ? true : false;
  string key1 = edge.source().key();
  string key2 = edge.dest().key();

  for (auto iter = adjList.at(key1).begin(); iter != adjList.at(key1).end(); iter++) {
    if ((**iter).get() == (*it).get()) {
      for (auto it2 = adjList.at(key2).begin(); it2 != adjList.at(key2).end(); it2++) {
        if ((**it2).get() == (*it).get()) {
          adjList.at(key2).erase(it2);
          break;
        }
      }
      edgeList.erase(it);
      adjList.at(key1).erase(iter);
      break;
    }
  }
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
  std::list<std::reference_wrapper<E>> edges;

  for (auto it = adjList.at(key).begin(); it != adjList.at(key).end(); it++)
    edges.push_front((**it).get());

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
  if (edgeList.empty())
    return false;

  E_byRef origEdge = *(edgeList.begin());
  V_byRef v1 = vertexMap.at(key1);
  V_byRef v2 = vertexMap.at(key2);
  bool directed = (origEdge.get().directed()) ? true : false;

  if (directed) {
    if (degree(v1) <= degree(v2)) {
      for (auto it = adjList.at(key1).begin(); it != adjList.at(key1).end(); it++) {
        if ((**it).get().source() == v1 && (**it).get().dest() == v2)
          return true;
      }
    }

    else {
      for (auto it = adjList.at(key2).begin(); it != adjList.at(key2).end(); it++) {
        if ((**it).get().source() == v1 && (**it).get().dest() == v2)
          return true;
      }
    }
  }

  else {
    if (degree(v1) <= degree(v2)) {
      for (auto it = adjList.at(key1).begin(); it != adjList.at(key1).end(); it++) {
        if (((**it).get().source() == v1 && (**it).get().dest() == v2) || ((**it).get().source() == v2 && (**it).get().dest() == v1))
          return true;
      }
    }

    else {
      for (auto it = adjList.at(key2).begin(); it != adjList.at(key2).end(); it++) {
        if (((**it).get().source() == v1 && (**it).get().dest() == v2) || ((**it).get().source() == v2 && (**it).get().dest() == v1))
          return true;
      }
    }
  }

  return false;
}
