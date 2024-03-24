#include "RGB/png.h"
#include "RGB/rgbapixel.h"

#include <string>
#include <cmath>

void rotate(std::string inputFile, std::string outputFile) {
	PNG pic(inputFile);
	
	unsigned width = pic.width();
    unsigned height = pic.height();
	
	for (unsigned x=0; x<width/2; x++){
		for (unsigned y=0; y < height ; y++){
			unsigned newX = width - x - 1;
            unsigned newY = height - y - 1;
            RGBAPixel temp = *pic(x, y);
            *pic(x, y) = *pic(newX, newY);
            *pic(newX, newY) = temp;
		}
    }

	
	pic.writeToFile(outputFile);
}

PNG myArt(unsigned int width, unsigned int height) {
	PNG png(width, height);
	RGBAPixel cyanColor(135, 206, 235);
	RGBAPixel ocean(6,66,115);
	RGBAPixel sand(194, 178, 128);
	for (unsigned x=0; x<width; x++){
		for (unsigned y=0; y < height ; y++){
			if(0 < y && y < 200){
				*png(x,y) = cyanColor;
			}
			
			if( 200 < y && y < 500){
				*png(x,y) = ocean;
			}
			if (y > 500){
				*png(x,y) = sand;
			}
			
		}		
	}
	for (unsigned x=0; x<width; x++){
		for (unsigned y=0; y < height ; y++)

	return png;

}
