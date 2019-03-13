#include "cs225/PNG.h"
#include <list>
#include <iostream>

#include "colorPicker/ColorPicker.h"
#include "imageTraversal/ImageTraversal.h"

#include "Point.h"
#include "Animation.h"
#include "FloodFilledImage.h"

using namespace cs225;

/**
 * Constructs a new instance of a FloodFilledImage with a image `png`.
 *
 * @param png The starting image of a FloodFilledImage
 */
FloodFilledImage::FloodFilledImage(const PNG & png) {
  /** @todo [Part 2] */
  image_ = png;
}

/**
 * Adds a flood fill operation to the FloodFillImage.  This function must store the operation,
 * which will be used by `animate`.
 *
 * @param traversal ImageTraversal used for this FloodFill operation.
 * @param colorPicker ColorPicker used for this FloodFill operation.
 */
void FloodFilledImage::addFloodFill(ImageTraversal & traversal, ColorPicker & colorPicker) {
  /** @todo [Part 2] */
  if(traversal_.max_size() == 0){
    traversal_.resize(1);
    colorPick.resize(1);
  }
  if(traversal_.size() + 1 >= traversal_.max_size()){
    traversal_.resize(traversal_.size() * 2);
    colorPick.resize(traversal_.size() * 2);
  }

  traversal_.push_back(&traversal);
  colorPick.push_back(&colorPicker);
}

/**
 * Creates an Animation of frames from the FloodFill operations added to this object.
 *
 * Each FloodFill operation added by `addFloodFill` is executed based on the order
 * the operation was added.  This is done by:
 * 1. Visiting pixels within the image based on the order provided by the ImageTraversal iterator and
 * 2. Updating each pixel to a new color based on the ColorPicker
 *
 * While applying the FloodFill to the image, an Animation is created by saving the image
 * after every `frameInterval` pixels are filled.  To ensure a smooth Animation, the first
 * frame is always the starting image and the final frame is always the finished image.
 *
 * (For example, if `frameInterval` is `4` the frames are:
 *   - The initial frame
 *   - Then after the 4th pixel has been filled
 *   - Then after the 8th pixel has been filled
 *   - ...
 *   - The final frame, after all pixels have been filed)
 */
Animation FloodFilledImage::animate(unsigned frameInterval) const {
  Animation animation;
  /** @todo [Part 2] */
  animation.addFrame(image_);
  for(unsigned i = 0; i < traversal_.size(); i++){
    ImageTraversal::Iterator it = traversal_[i]->begin();
    Point current = Point(0,0);
    unsigned currFrame = 0;

    while(it != traversal_[i]->end()){
      current = *it;

      image_.getPixel(current.x,current.y) = colorPick[i]->getColor(current.x,current.y);
      ++currFrame;

      if (currFrame % frameInterval == 0){
        animation.addFrame(image_);
      }

      ++it;
    }
  }

  animation.addFrame(image_);
  return animation;
}
