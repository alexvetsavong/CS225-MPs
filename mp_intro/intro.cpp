#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
#include <cmath>
using namespace cs225;

#include <string>

PNG* setupOutput(unsigned w, unsigned h){
  PNG* image = new PNG(w,h);
  return image;
}

void rotate(std::string inputFile, std::string outputFile) {
  // TODO: Part 2
  PNG* original = new PNG;
  original->readFromFile(inputFile);
  unsigned int width = original->width();
  unsigned int height = original->height();
  PNG* output = setupOutput(width, height);

  for (unsigned int y = 0; y < height; y++) {
    for (unsigned int x = 0; x < width; x++) {
      HSLAPixel& currInPixel = original->getPixel(x,y);
      HSLAPixel& currOutPixel = output->getPixel(width-1-x, height-1-y);
      currOutPixel = currInPixel;
    }
  }

  output->writeToFile(outputFile);
  delete output;
  delete original;
}

PNG myArt(unsigned int width, unsigned int height) {
  PNG png = PNG(width,height);
  // TODO: Part 3

  for (unsigned int y = 0; y < height; y++) {
    for (unsigned int x = 0; x < width; x++) {
      HSLAPixel& outPixel = png.getPixel(x,y);
      if(pow((double)x - (double)width/2.0, 2.0) + pow((double)y - (double)height/2.0, 2.0) <= (width/2)) {
        outPixel.h = pow((double)x,3) + pow((double)y,2) - 36.0;
      }
      else {
        outPixel.h = (double)width/360.0 * x;
      }
    }
  }
  return png;
}
