#ifndef DATASTRUCTURES_H
#define DATASTRUCTURES_H
#include <stdint.h>

struct Vec3
{

	Vec3() : xPos(0.0f), yPos(0.0f), zPos(0.0f) {}
	Vec3(float x, float y, float z) : xPos(x), yPos(y), zPos(z) {}
	Vec3(const Vec3& other) : xPos(other.xPos), yPos(other.yPos), zPos(other.zPos) {}
	~Vec3() {}


	float xPos;
	float yPos;
	float zPos;
};

struct Rect
{
    int x;
    int y;
    uint32_t width;
    uint32_t height;
    uint32_t color;

    Rect(int _x, int _y, uint32_t _width, uint32_t _height, uint32_t _color) :
        x(_x),
        y(_y),
        width(_width),
        height(_height),
        color(_color) 
    {}
};


#endif