#include "StickerSheet.h"
#include "Image.h"
#include <cmath>

StickerSheet::StickerSheet(const Image &picture, unsigned max)
{
  image_array[0].image = picture;
  image_array[0].index = 0;
  index = 0;
  max_images = max;
}

StickerSheet::~StickerSheet()
{
  delete[] image_array;
}

StickerSheet::StickerSheet(const StickerSheet &other)
{
  copy();
}

const StickerSheet::StickerSheet& operator=(const StickerSheet &other)
{
  destroy();
  copy();
  return this;
}

void StickerSheet::changeMaxStickers(unsigned max)
{
  max_images = max;
}

int StickerSheet::addSticker(Image &sticker, unsigned x, unsigned y)
{
  if(index != max_images-1){
    image_array[index].image = sticker;
    image_array[index].index = index;
    image_array[index].x_pos = x;
    image_array[index].y_pos = y;
    index++;
    return index;
  }
  else return -1;
}


bool StickerSheet::translate(unsigned index, unsigned x, unsigned y)
{

}

void StickerSheet::removeSticker(unsigned index)
{
  if (index != 0){
    delete image_array[index];
    index--;
  }
  else return;
}

Image * StickerSheet::getSticker(unsigned index)
{

}

Image StickerSheet::render() const
{

}

void StickerSheet::copy()
{
  this->max_images = max_images;
  this->index = index;
  for(int i = 0; i < index; i++){
    this->image_array[i] = other.image_array[i];
  }
}

void StickerSheet::StickerSheet::destroy()
{
  for (int i = index-1; i < index; i++){
    delete this->image_array[i].image;
  }
  delete[] this->image_array;
}
