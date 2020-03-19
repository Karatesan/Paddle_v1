#include "Paddle.h"


void Paddle::draw(Graphics& gfx) {
	gfx.DrawRect((int)p.x, (int)p.y, (int)p.x + (int)p.w, (int)p.y + (int)p.h, Colors::White);
}

void Paddle::check_wall_collision()
{
}
