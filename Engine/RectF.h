#pragma once
#include "Vec2.h"
class RectF
{
public:
	RectF() = default;
	RectF(float in_left, float in_right, float in_top, float in_bottom);
	RectF(const Vec2& top_left, const Vec2& bottom_right);
	RectF(const Vec2& top_left, float width, float height);
	bool isOverlappingWith(const RectF& other) const;
	static RectF FromCenter(const Vec2& center, float halfWidth, float halfHeight);
public:
	float right;
	float left;
	float top;
	float bottom;
};

