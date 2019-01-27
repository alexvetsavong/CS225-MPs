#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
using namespace cs225;

#include <cmath>
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
  // TODO: Part 3
  PNG png = PNG(width, height);
  for(unsigned int y = 0; y < height; y++) {
    for(unsigned int x = 0; x < width; x++) {
      HSLAPixel& currInPixel = png.getPixel(x,y);
      if(y <= height * sin(y)) {
        currInPixel.h = (360/(double)height)*pow(x + y,3);
        currInPixel.s = 0.8;
        currInPixel.l = 0.5;
      }
      else {
        currInPixel.h = 360/(2*(double)height) * abs((double)(height/2) - (double)y);
        currInPixel.s = 1/(double)width * (double)x;
        currInPixel.l = 1/(double)height * (double)y;
      }
    }
  }
  return png;
}
