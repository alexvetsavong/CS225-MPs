/* Your code here! */
#include "maze.h"

SquareMaze::SquareMaze(){
}

bool SquareMaze::canTravel(int x, int y, int dir) const{
  return false;
}

PNG * SquareMaze::drawMaze() const {
  PNG * maze_image = new PNG();
  HSLAPixel black = HSLAPixel(0,0,0);
  maze_image->resize(_width*10+1,_height*10+1);

  for (unsigned int i = 0; i < maze_image->width(); i++){
    if (i < 1 || i > 9) {
      HSLAPixel & maze_pixel = maze_image->getPixel(i, 0);
      maze_pixel = black;
    }
  }

  for (unsigned int j = 0; j < maze_image->height(); j++){
    HSLAPixel & maze_pixel = maze_image->getPixel(0, j);
    maze_pixel = black;
  }

  return maze_image;
}

PNG * SquareMaze::drawMazeWithSolution(){
  PNG * maze_solution = new PNG();
  return maze_solution;
}

void SquareMaze::makeMaze (int width, int height){
  _width = width;
  _height = height;
  int current = 0;

  // if we have a non-empty dset already, clear it
  if (!maze._elems.empty()) maze._elems.clear();

  maze.addelements(width*height);


  return;
}

void SquareMaze::setWall (int x, int y, int dir, bool exists){
  return;
}

std::vector<int> SquareMaze::solveMaze(){
 std::vector<int> solution;
 return solution;
}

int numberSets(std::vector<int> v){
  size_t n = 0;

  if ( v.begin() != v.end() )
  {
    ++n;
    for ( auto current = v.begin(), prev = v.begin();
         ++current != v.end(); ++prev )
    {
        if ( !( *prev < *current ) && !( *current < *prev ) ) ++n;
    }
  }

  return n;
}
