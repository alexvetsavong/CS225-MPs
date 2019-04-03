/**
 * @file maptiles.cpp
 * Code for the maptiles function.
 */

#include <iostream>
#include <map>
#include "maptiles.h"
//#include "cs225/RGB_HSL.h"

using namespace std;


Point<3> convertToXYZ(LUVAPixel pixel) {
    return Point<3>( pixel.l, pixel.u, pixel.v );
}

MosaicCanvas* mapTiles(SourceImage const& theSource,
                       vector<TileImage>& theTiles)
{
    /**
     * @todo Implement this function!
     */
    size_t rows = theSource.getRows();
    size_t cols = theSource.getColumns();
    MosaicCanvas* newCanvas = new MosaicCanvas(rows, cols);

    LUVAPixel averageColor = LUVAPixel();
    Point<3> tileAsPoint = Point<3>();

    vector<Point<3>> tileColors;
    tileColors.resize(0);

    TileImage * writeImage = NULL;

    std::map<Point<3>, TileImage*> pointToTile;

    for(size_t i = 0; i < theTiles.size(); i++){
      averageColor = theTiles[i].getAverageColor();
      tileAsPoint = convertToXYZ(averageColor);
      tileColors.push_back(tileAsPoint);
      pointToTile.insert(std::pair<Point<3>, TileImage*>(tileAsPoint, &theTiles[i]));
    }

    KDTree<3> tiles(tileColors);

    for (size_t j = 0; j < cols; j++){
      for (size_t k = 0; k < rows; k++){
        averageColor = theSource.getRegionColor(k,j);
        tileAsPoint = convertToXYZ(averageColor);
        tileAsPoint = tiles.findNearestNeighbor(tileAsPoint);

        writeImage = pointToTile[tileAsPoint];
        newCanvas->setTile(k,j, writeImage);
      }
    }

    return newCanvas;
}
