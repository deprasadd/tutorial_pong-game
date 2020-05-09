#pragma once
#include "Graphics.h"
#include "RectF.h"
#include "Ball.h"

class Brick
{
public:
	Brick(const RectF& in_rect, const Color c);
	void Draw(Graphics& gfx) const;
	bool DoBallCollision(Ball& ball);
private:
	RectF rect;
	Color col;
	bool destroyed = false;

};