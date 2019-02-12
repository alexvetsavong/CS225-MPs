#include "Image.h"
#include "StickerSheet.h"
#include <iostream>
using cs225::HSLAPixel;
/*  Implementation of user-defined class to assist in storing images with position  */
arrayElement::arrayElement() : image(NULL), index(0), x_pos(0), y_pos(0){}

const arrayElement& arrayElement::operator=(const arrayElement &other){
  if (this != &other){
    delete image;
    image = new Image;
    *(image) = *(other.image);
    index = other.index;
    x_pos = other.x_pos;
    y_pos = other.y_pos;
  }
  return *this;
}

arrayElement::~arrayElement(){
  delete image;
}

/*  Starting implementation for StickerSheet below  */
StickerSheet::StickerSheet(const Image &picture, unsigned max){
  base = new Image;
  image_array = new arrayElement[max];
  max_images = max;

  *(base) = picture;
}

StickerSheet::~StickerSheet(){
  destroy();
}

StickerSheet::StickerSheet(const StickerSheet &other){
  if (this != &other)
    copy(other);
}

const StickerSheet& StickerSheet::operator=(const StickerSheet &other){
  if(this != &other){
    destroy();
    copy(other);
  }
  return *this;
}

void StickerSheet::changeMaxStickers(unsigned max){
  if (max < max_images){
    arrayElement * new_image_array = new arrayElement[max];
    for (unsigned i = 0; i < max; i++){
      if(image_array[i].image != NULL) new_image_array[i] = image_array[i];
    }
    delete[] image_array;
    image_array = new_image_array;
  }

  if (max > max_images){
    arrayElement * new_image_array = new arrayElement[max];
    for (unsigned i = 0; i < max_images; i++){
      if(image_array[i].image != NULL) new_image_array[i] = image_array[i];
    }
    delete[] image_array;
    image_array = new_image_array;
  }
  max_images = max;
}

int StickerSheet::addSticker(Image &sticker, unsigned x, unsigned y){
  for(unsigned i = 0; i < max_images; i++){
    if (image_array[i].image == NULL && i < max_images){
      image_array[i].image = new Image;
      image_array[i].index = i;
      image_array[i].x_pos = x;
      image_array[i].y_pos = y;
      image_array[i].y_pos = y;

      *(image_array[i].image) = sticker;
      return i;
    }
  }
  return -1;
}

bool StickerSheet::translate(unsigned index, unsigned x, unsigned y){
  for (unsigned i = 0; i < max_images; i++){
    if (i == index && image_array[i].image != NULL){
      image_array[i].x_pos = x;
      image_array[i].y_pos = y;
      return true;
    }
  }
  return false;
}

void StickerSheet::removeSticker(unsigned index){
  for (unsigned i = 0; i < max_images; i++){
    if (image_array[i].index == index && image_array[i].image != NULL){
      delete image_array[i].image;
      image_array[i].image = NULL;
      image_array[i].index = 0;
      image_array[i].x_pos = 0;
      image_array[i].y_pos = 0;
      return;
    }
  }
  return;
}

Image * StickerSheet::getSticker(unsigned index){
  for (unsigned i = 0; i < max_images; i++){
    if (i == index && image_array[i].image != NULL){
      return image_array[i].image;
    }
  }
  return NULL;
}

Image StickerSheet::render() const{
  Image * result = base;

  for (unsigned i = 0; i < max_images; i++){
    if (i == image_array[i].index && image_array[i].image != NULL){
      for (unsigned y = 0; y < image_array[i].image->height(); y++){
        for (unsigned x = 0; x < image_array[i].image->width(); x++){
          HSLAPixel & stickerPixel = image_array[i].image->getPixel(x,y);
          HSLAPixel & outputPixel = result->getPixel(x + image_array[i].x_pos, y+image_array[i].y_pos);
          if (stickerPixel.a != 0) outputPixel = stickerPixel;
        }
      }
    }
  }
  return *result;
}

void StickerSheet::copy(const StickerSheet & other){
  this->max_images = other.max_images;

  this->base = new Image;
  *(this->base) = *(other.base);

  this->image_array = new arrayElement[other.max_images];
  for (unsigned i = 0; i < this->max_images; i++){
    if(other.image_array[i].image != NULL){
      this->image_array[i].image = new Image;
      *(this->image_array[i].image) = *(other.image_array[i].image);
      this->image_array[i].x_pos = other.image_array[i].x_pos;
      this->image_array[i].y_pos = other.image_array[i].y_pos;
    }
  }
}

void StickerSheet::destroy(){
  delete base;
  delete[] image_array;
}
