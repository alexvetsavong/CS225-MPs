#include <cmath>
#include <iterator>
#include <iostream>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

/**
 * Calculates a metric for the difference between two pixels, used to
 * calculate if a pixel is within a tolerance.
 *
 * @param p1 First pixel
 * @param p2 Second pixel
 * @return the difference between two HSLAPixels
 */
double ImageTraversal::calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2) {
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180) { h = 360 - h; }
  h /= 360;

  return sqrt( (h*h) + (s*s) + (l*l) );
}

/**
 * Used to determine one past the end;
 */
ImageTraversal::Iterator::Iterator(unsigned x, unsigned y) {
  /** @todo [Part 1] */
  position_ = Point(x+1,y+1);
}

ImageTraversal::Iterator::Iterator(ImageTraversal * traversal) {
  traversal_ = traversal;
  position_ = traversal_->start_;

  unsigned x = traversal_->image_.width();
  unsigned y = traversal_->image_.height();

  visited_.resize(x, vector<bool>(y,false));
  visited_.at(position_.x).at(position_.y) = true;
}

/**
 * Gets the difference between two points and returns it as a double
 * @Param one point
 * @Param some other point
 */

double ImageTraversal::Iterator::getDelta(Point one, Point two) {
  return fabs(traversal_->calculateDelta(traversal_->image_.getPixel(one.x,one.y),
              traversal_->image_.getPixel(two.x,two.y)));
}


/**
 * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator & ImageTraversal::Iterator::operator++() {
  /** @todo [Part 1] */
  Point temp = Point(0,0);

  temp = traversal_->pop();

  if (visited_.at(temp.x).at(temp.y) == false){
    position_ = temp;
    visited_.at(temp.x).at(temp.y) = true;
  }

  // std::cout << "Current Point: " << position_ << std::endl;

  /***************** Section to add neighbors of current point *****************/
  if (position_.x < traversal_->image_.width() - 1){
    temp = Point(position_.x + 1, position_.y);
    if(getDelta(traversal_->start_,temp) < traversal_->tolerance_){
      traversal_->add(temp);
      // std::cout << "Added Point: " << temp << std::endl;
    }
    else {
      // std::cout << "Ignored Point: " << temp << std::endl;
    }
  }

  if (position_.y < traversal_->image_.height() - 1){
    temp = Point(position_.x, position_.y + 1);
    if(getDelta(traversal_->start_,temp) < traversal_->tolerance_){
      traversal_->add(temp);
      // std::cout << "Added Point: " << temp << std::endl;
    }
    else {
      // std::cout << "Ignored Point: " << temp << std::endl;
    }
  }

  if (position_.x > 0){
    temp = Point(position_.x - 1, position_.y);
    if(getDelta(traversal_->start_,temp) < traversal_->tolerance_){
      traversal_->add(temp);
      // std::cout << "Added Point: " << temp << std::endl;
    }
    else {
      // std::cout << "Ignored Point: " << temp << std::endl;
    }
  }

  if (position_.y > 0){
    temp = Point(position_.x, position_.y - 1);
    if(getDelta(traversal_->start_,temp) < traversal_->tolerance_){
      traversal_->add(temp);
      // std::cout << "Added Point: " << temp << std::endl;
    }
    else {
      // std::cout << "Ignored Point: " << temp << std::endl;
    }
  }

  /****************************************************************************/

  /********************* Move iterator to the next point **********************/
  temp = traversal_->peek();

  while (visited_.at(temp.x).at(temp.y) == true){
    // temp = traversal_->peek();
    traversal_->pop();

    if(traversal_->empty() == true){
      Iterator end = traversal_->end();
      this->position_ = end.position_;
      return *this;
    }

    temp = traversal_->peek();
  }


  position_ = traversal_->peek();

  // std::cout << "Moved to: " << position_ << std::endl;
  return *this;
}

/**
 * Iterator accessor opreator.
 *
 * Accesses the current Point in the ImageTraversal.
 */
Point ImageTraversal::Iterator::operator*() {
  /** @todo [Part 1] */
  return position_;
}

/**
 * Iterator inequality operator.
 *
 * Determines if two iterators are not equal.
 */
bool ImageTraversal::Iterator::operator!=(const ImageTraversal::Iterator &other) {
  /** @todo [Part 1] */
  if (this->position_ == other.position_)
      return false;
  else return true;
}
