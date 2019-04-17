/* Your code here! */
#pragma once
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include "cs225/HSLAPixel.h"
#include "cs225/PNG.h"
#include "dsets.h"

using namespace cs225;

class SquareMaze {
public:
  SquareMaze();
  bool canTravel(int x, int y, int dir) const;
  PNG * drawMaze() const;
  PNG * drawMazeWithSolution();
  void makeMaze (int width, int height);
  void setWall (int x, int y, int dir, bool exists);
  std::vector<int> solveMaze();
private:
  int _width;
  int _height;
  DisjointSets maze;

};
