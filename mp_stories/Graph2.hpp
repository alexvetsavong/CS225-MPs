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
  std::queue<std::string> queue;

  //map to keep track of visited vertex
  std::unordered_map<std::string, bool> visited;

  //map to keep track of distance between start and another vertex given the key
  std::unordered_map<std::string, unsigned int> distance;

  //map that keeps track of predecessor
  std::unordered_map<std::string, std::string> predecessor;

  auto it = vertexMap.begin();

  while (it != vertexMap.end()) {
    visited.emplace(it->first, false);
    distance.emplace(it->first, 0);
    predecessor.emplace(it->first, std::string());
    it++;
  }

  visited[start] = true;
  distance[start] = 0;
  queue.push(start);

  while (!queue.empty()) {
    std::string current = queue.front();
    queue.pop();
    std::list<std::reference_wrapper<E>> edges = incidentEdges(current);

    auto it = edges.begin();
    while (it != edges.end()) {
      if (visited[it->get().dest().key()] == false) {
        visited[it->get().dest().key()] = true;
        distance[it->get().dest().key()] = distance[current] + 1;
        predecessor[it->get().dest().key()] = current;
        queue.push(it->get().dest().key());
      }
      if (it->get().dest().key() == end) break;
      it++;
    }
  }

  std::string crawl = end;
  path.push_front(crawl);

  while (predecessor[crawl] != std::string()) {
    path.push_front(predecessor[crawl]);
    crawl = predecessor[crawl];
  }

  // printing path from source to destination
  std::cout << "\nPath is::\n";
  for (auto it = path.begin(); it != path.end(); it++)
    std::cout << *it << " ";

  return path;
}
