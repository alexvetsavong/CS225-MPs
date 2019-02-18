/**
 * @file StickerSheet.h
 * Contains your declaration of the interface for the StickerSheet class.
 */
#pragma once
#include "Image.h"

class arrayElement
{
public:
  arrayElement();
  const arrayElement& operator=(const arrayElement &other);
  ~arrayElement();
  Image * image;
  unsigned index;
  unsigned x_pos;
  unsigned y_pos;
};

class StickerSheet
{
public:
  StickerSheet(const Image &picture, unsigned max);
  ~StickerSheet();
  StickerSheet(const StickerSheet &other);
  const StickerSheet& operator=(const StickerSheet &other);
  void changeMaxStickers(unsigned max);
  int addSticker(Image &sticker, unsigned x, unsigned y);
  bool translate(unsigned index, unsigned x, unsigned y);
  void removeSticker(unsigned index);
  Image * getSticker(unsigned index);
  Image render() const;

  void copy(const StickerSheet & other);
  void destroy();

private:
  Image * base;
  arrayElement * image_array;
  unsigned max_images;
};
