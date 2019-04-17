/* Your code here! */
#pragma once
#include <vector>
#include <algorithm>

class DisjointSets {
public:
  DisjointSets();

  /* since using STL vector, compiler-default big 3
     is sufficient */

  void addelements (int num);
  int find (int elem);
  void setunion (int a, int b);
  int size (int elem);

  std::vector<int> _elems;
private:
};
