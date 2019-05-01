#include <queue>
#include <algorithm>
#include <string>
#include <list>

/**
 * Returns an std::list of vertex keys that creates any shortest path between `start` and `end`.
 *
 * This list MUST include the key of the `start` vertex as the first vertex in the list, the key of
 * the `end` vertex as the last element in the list, and an ordered list of all vertices that must
 * be traveled along the shortest path.
 *
 * For example, the path a -> c -> e returns a list with three elements: "a", "c", "e".
 *
 * You should use undirected edges. Hint: There are no edge weights in the Graph.
 *
 * @param start The key for the starting vertex.
 * @param end   The key for the ending vertex.
 */
template <class V, class E>
std::list<std::string> Graph<V,E>::shortestPath(const std::string start, const std::string end) {
  // TODO: Part 3
  std::list<std::string> path;

  //queue for BFS
  std::list<std::string> queue;
  queue.clear();

  //map to keep track of visited vertex
  std::unordered_map<std::string, bool> visited;

  //map to keep track of distance between start and another vertex given the key
  std::unordered_map<std::string, unsigned int> distance;

  //map that keeps track of predecessor
  std::unordered_map<std::string, std::string> predecessor;

  auto it = vertexMap.begin();

  while (it != vertexMap.end()) {
    visited.emplace(it->first, false);
    distance.emplace(it->first, -1);
    predecessor.emplace(it->first, std::string());
    it++;
  }

  visited[start] = true;
  distance[start] = 0;
  queue.push_back(start);

  while (!queue.empty()) {
    std::string current = queue.front(); queue.pop_front();
    std::list<std::reference_wrapper<E>> edges = incidentEdges(current);

    auto it = edges.begin();
    while (it != edges.end()) {
      if (it->get().dest().key() != current){
        if (visited[it->get().dest().key()] == false) {
          visited[it->get().dest().key()] = true;
          distance[it->get().dest().key()] = distance[current] + 1;
          predecessor[it->get().dest().key()] = current;
          queue.push_back(it->get().dest().key());
        }
        if (it->get().dest().key() == end) break;
      }

      else {
        if (visited[it->get().source().key()] == false) {
          visited[it->get().source().key()] = true;
          distance[it->get().source().key()] = distance[current] + 1;
          predecessor[it->get().source().key()] = current;
          queue.push_back(it->get().source().key());
        }
        if (it->get().source().key() == end) break;
      }

      it++;
    }
  }

  std::string crawl = end;
  path.push_front(crawl);

  while (predecessor[crawl] != std::string()) {
    path.push_front(predecessor[crawl]);
    crawl = predecessor[crawl];
  }

  return path;
}
