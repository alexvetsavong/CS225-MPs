#include "Image.h"
#include "StickerSheet.h"

int main() {

  //
  // Reminder:
  //   Before exiting main, save your creation to disk as myImage.png
  //

  Image base;
  Image link;
  Image fire;
  Image sunglasses;
  Image result;

  base.readFromFile("alma.png");
  link.readFromFile("link_windwaker.png");
  fire.readFromFile("fire.png");
  sunglasses.readFromFile("sunglasses.png");
  link.scale(0.5);
  fire.scale(0.75);
  sunglasses.scale(0.05);

  StickerSheet sheet = StickerSheet(base, 3);
  sheet.addSticker(sunglasses, 396, 24);
  sheet.addSticker(fire, 20, base.height() - fire.height());
  sheet.addSticker(link, 0, base.height() - link.height());
  result = sheet.render();
  result.writeToFile("myImage.png");

  return 0;
}
