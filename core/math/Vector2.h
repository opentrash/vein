#ifndef VECTOR2_H
#define VECTOR2_H

#include "math_funcs.h"

struct Vector2 {
	union {
		struct {
			float x;
			float y;
		};
		float coord[2];
	};
	Vector2(void);
	Vector2(float _x, float _y);
	Vector2(const Vector2 &c);
	inline float length() const;
	inline Vector2 normalized() const;
	inline void normalize();
	inline bool is_normalized() const;
};

/**
 * vector length
 */
float Vector2::length() const {
	float x2 = x * x;
	float y2 = y * y;
	return sqrtf(x2 + y2);
}

/**
 * normalize the vector
 */
Vector2 Vector2::normalized() const {
	Vector2 target;
	float len = length();
	if (len == 0.0) {
		target.x = 0.0;
		target.y = 0.0;
	} else {
		target.x = x / len;
		target.y = y / len;
	}
	return target;
}

/**
 * normalize self
 */
void Vector2::normalize() {
	float len = length();
	if (len != 0.0) {
		x /= len;
		y /= len;
	}
}

bool Vector2::is_normalized() const {
	return almost_equal(length(), (float)1.0, 2);
}

#endif // define VECTOR2_H
