#include "Vector2.h"

/**
 * constructor
 * (0.0, 0.0)
 */
Vector2::Vector2(void) {
	x = 0.0;
	y = 0.0;
}

/**
 * constructor with init
 * (x, y)
 */
Vector2::Vector2(float _x, float _y) {
	x = _x;
	y = _y;
}

/**
 * constructor from Vector2
 */
Vector2::Vector2(const Vector2 &c) {
	x = c.x;
	y = c.y;
}

/**
 * vector length
 */
float Vector2::length() {
	float x2 = x * x;
	float y2 = y * y;
	return sqrtf(x2 + y2);
}

/**
 * normalize the vector
 */
Vector2 Vector2::normalize() {
	Vector2 target;
	float len = length();
	target.x = x / len;
	target.y = y / len;
	return target;
}
