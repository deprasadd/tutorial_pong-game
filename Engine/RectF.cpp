#include "RectF.h"

RectF::RectF(float in_left, float in_right, float in_top, float in_bottom)
	:
	left(in_left),
	right(in_right),
	top(in_top),
	bottom(in_bottom)
{
}

RectF::RectF(const Vec2& top_left, const Vec2& bottom_right)
	:
	RectF(top_left.x, bottom_right.x, top_left.y, bottom_right.y)
{
}

RectF::RectF(const Vec2& top_left, float width, float height)
	:
	RectF(top_left, top_left + Vec2(width, height))
{
}

bool RectF::isOverlappingWith(const RectF& other) const
{
	return right > other.left && left < other.right
		&& bottom > other.top && top < other.bottom;
}

RectF RectF::FromCenter(const Vec2& center, float halfWidth, float halfHeight)
{
	const Vec2 half(halfWidth, halfHeight);
	return RectF(center - half, center + half);
}
