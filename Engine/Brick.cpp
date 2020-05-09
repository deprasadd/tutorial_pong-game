#include "Brick.h"

Brick::Brick(const RectF& in_rect, const Color c)
	:
	rect(in_rect),
	col(c)
{
}

void Brick::Draw(Graphics& gfx) const
{
	if (!destroyed)
	{
		gfx.DrawRect(rect, col);
	}
}

bool Brick::DoBallCollision(Ball& ball)
{
	if (!destroyed && rect.isOverlappingWith(ball.GetRect()))
	{
		ball.ReboundY();
		destroyed = true;
		return true;
	}
	return false;
}
