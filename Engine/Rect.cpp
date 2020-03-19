#include "Rect.h"


Rect::Rect(Vec2 p1, Vec2 p2)
	:x(p1.x), y(p1.y), w(p2.x-p1.x), h(p2.y-p1.y)
{
}

Rect::Rect(Vec2 p1, float width, float height)
	:x(p1.x), y(p1.y), w(width), h(height)
{
}
