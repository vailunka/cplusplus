/**
 * @file rgbapixel.h
 * Definition of the RGBAPixel class for the EasyPNG library.
 *
 * @author Chase Geigle
 * @date Spring 2012
 * 
 * 
 */
#ifndef RGBAPIXEL_H
#define RGBAPIXEL_H

#include <cstdint>
using std::uint8_t;

class RGBAPixel{
    public:

        RGBAPixel();
        RGBAPixel(uint8_t r, uint8_t g, uint8_t blue);
       
        uint8_t red;
        uint8_t green;
        uint8_t blue;
        uint8_t alpha;

};
#endif
