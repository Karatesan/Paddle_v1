#pragma once

#include "Graphics.h"
#include "Vec2.h"

class Rect {
public:
	Rect(Vec2 p1, Vec2 p2);
	Rect(Vec2 p1, float width, float height);


	float x;
	float y;
	float w;
	float h;
};
