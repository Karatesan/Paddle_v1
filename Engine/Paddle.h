#pragma once
#include "Rect.h"

class Paddle {
public:
	Paddle(float x, float y, float width, float height)
		: p{ {x,y}, width, height } {}
	void update(float dt);
	void draw(Graphics& gfx);
	void move(const float dt) { p.x += velocity * dt; }

	void check_wall_collision();


private:
	Rect p;
	float velocity = 100;
};
