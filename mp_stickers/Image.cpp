#include "cs225/PNG.h"
#include "Image.h"
#include <cmath>

using namespace cs225;

double hueWrapAround(double hue){
  return hue - 360*floor(hue/360);
}

void Image::lighten(){
  for(unsigned y = 0; y < height(); y++){
    for(unsigned x = 0; x < width(); x++){
      HSLAPixel & currPixel = getPixel(x,y);
      if (currPixel.l + 0.1 <= 1 && currPixel.l + 0.1 >= 0){
        currPixel.l += 0.1;
      }
      else if (currPixel.l + 0.1 > 1) currPixel.l = 1;
      else if (currPixel.l + 0.1 < 0) currPixel.l = 0;
    }
  }
}

void Image::lighten(double amount){
  for(unsigned y = 0; y < height(); y++){
    for(unsigned x = 0; x < width(); x++){
      HSLAPixel & currPixel = getPixel(x,y);
      if (currPixel.l + amount <= 1 && currPixel.l + amount >= 0){
        currPixel.l += amount;
      }
      else if (currPixel.l + amount > 1) currPixel.l = 1;
      else if (currPixel.l + amount < 0) currPixel.l = 0;
    }
  }
}

void Image::darken(){
  for(unsigned y = 0; y < height(); y++){
    for(unsigned x = 0; x < width(); x++){
      HSLAPixel & currPixel = getPixel(x,y);
      if (currPixel.l - 0.1 <= 1 && currPixel.l - 0.1 >= 0){
        currPixel.l -= 0.1;
      }
      else if (currPixel.l - 0.1 > 1) currPixel.l = 1;
      else if (currPixel.l - 0.1 < 0) currPixel.l = 0;
    }
  }
}

void Image::darken(double amount){
  for(unsigned y = 0; y < height(); y++){
    for(unsigned x = 0; x < width(); x++){
      HSLAPixel & currPixel = getPixel(x,y);
      if (currPixel.l - amount < 1 && currPixel.l - amount > 0){
        currPixel.l -= amount;
      }
      else if (currPixel.l - amount > 1) currPixel.l = 1;
      else if (currPixel.l - amount < 0) currPixel.l = 0;
    }
  }
}

void Image::saturate(){
  for(unsigned y = 0; y < height(); y++){
    for(unsigned x = 0; x < width(); x++){
      HSLAPixel & currPixel = getPixel(x,y);
      if (currPixel.s + 0.1 < 1 && currPixel.s + 0.1 > 0){
        currPixel.s += 0.1;
      }
      else if (currPixel.s + 0.1 > 1) currPixel.s = 1;
      else if (currPixel.s + 0.1 < 0) currPixel.s = 0;
    }
  }
}

void Image::saturate(double amount){
  for(unsigned y = 0; y < height(); y++){
    for(unsigned x = 0; x < width(); x++){
      HSLAPixel & currPixel = getPixel(x,y);
      if (currPixel.s + amount < 1 && currPixel.s + amount > 0){
        currPixel.s += amount;
      }
      else if (currPixel.s + amount > 1) currPixel.s = 1;
      else if (currPixel.s + amount < 0) currPixel.s = 0;
    }
  }
}

void Image::desaturate(){
  for(unsigned y = 0; y < height(); y++){
    for(unsigned x = 0; x < width(); x++){
      HSLAPixel & currPixel = getPixel(x,y);
      if (currPixel.s - 0.1 < 1 && currPixel.s - 0.1 > 0){
        currPixel.s -= 0.1;
      }
      else if (currPixel.s - 0.1 > 1) currPixel.s = 1;
      else if (currPixel.s - 0.1 < 0) currPixel.s = 0;
    }
  }
}

void Image::desaturate(double amount){
  for(unsigned y = 0; y < height(); y++){
    for(unsigned x = 0; x < width(); x++){
      HSLAPixel & currPixel = getPixel(x,y);
      if (currPixel.s - amount < 1 && currPixel.s - amount > 0){
        currPixel.s -= amount;
      }
      else if (currPixel.s - amount > 1) currPixel.s = 1;
      else if (currPixel.s - amount < 0) currPixel.s = 0;
    }
  }
}

void Image::grayscale(){
  for(unsigned y = 0; y < height(); y++){
    for(unsigned x = 0; x < width(); x++){
      HSLAPixel & currPixel = getPixel(x,y);
      currPixel.h = 0;
    }
  }
}

void Image::rotateColor(double degrees){
  for(unsigned y = 0; y < height(); y++){
    for(unsigned x = 0; x < width(); x++){
      HSLAPixel & currPixel = getPixel(x,y);
      currPixel.h = hueWrapAround(currPixel.h + degrees);
    }
  }
}

void Image::illinify(){
  for(unsigned y = 0; y < height(); y++){
    for(unsigned x = 0; x < width(); x++){
      HSLAPixel & currPixel = getPixel(x, y);
      if(currPixel.h <= (113.5) || currPixel.h >= (293.5)){
        currPixel.h = 11.0;
      }
      else currPixel.h = 216.0;
    }
  }
}

void Image::scale(double factor){
  Image temp;
  temp.resize(factor*width(),factor*height());
  for(unsigned y = 0; y < height(); y++){
    for(unsigned x = 0; x < width(); x++){
      HSLAPixel & currPixel = getPixel(x,y);  // gets the pixel data of the original image at current x,y
      for(unsigned j = 0; j < factor; j++){
        for(unsigned i = 0; i < factor; i++){
          HSLAPixel & outPixel = temp.getPixel(x*factor + i, y*factor + j);
          outPixel = currPixel;
        }
      }
    }
  }
  *this = temp;
}

void Image::scale(unsigned w, unsigned h){  //e.g 10000x200
  double factor = 0.0;
  double aspectRatio = (double)width()/(double)height();

  factor = (double)w/(double)width();
  if (factor*(double)height() > h){
    factor = (double)h/(double)height();
  }

  if ((factor*(double)width())/(factor*(double)height()) != aspectRatio) return;

  Image temp;
  temp.resize(factor*width(),factor*height());
  for(unsigned y = 0; y < height(); y++){
    for(unsigned x = 0; x < width(); x++){
      HSLAPixel & currPixel = getPixel(x,y);  // gets the pixel data of the original image at current x,y
      for(unsigned j = 0; j < factor; j++){
        for(unsigned i = 0; i < factor; i++){
          HSLAPixel & outPixel = temp.getPixel(x*factor + i, y*factor + j);
          outPixel = currPixel;
        }
      }
    }
  }
  *this = temp;
}
