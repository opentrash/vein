#ifndef VECTOR2_H
#define VECTOR2_H

#include <math.h>

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
	float length();
	Vector2 normalize();
	void normalize_self();
};

#endif // define VECTOR2_H
