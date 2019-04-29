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
	float length() const;
	Vector2 normalized() const;
	void normalize();
	bool is_normalized() const;
};

/**
 * vector length
 */
inline float Vector2::length() const {
	float x2 = x * x;
	float y2 = y * y;
	return sqrtf(x2 + y2);
}

/**
 * normalize the vector
 */
inline Vector2 Vector2::normalized() const {
	Vector2 target = *this;
	target.normalize();
	return target;
}

/**
 * normalize self
 */
inline void Vector2::normalize() {
	float len = length();
	if (len != 0.0) {
		x /= len;
		y /= len;
	}
}

/*
 * if is a normalized vector
 */
inline bool Vector2::is_normalized() const {
	return almost_equal(length(), (float)1.0, 2);
}

#endif // define VECTOR2_H
