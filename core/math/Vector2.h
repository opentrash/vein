#ifndef VECTOR2_H
#define VECTOR2_H

class Vector2 {
private:
public:
	float x;
	float y;
	Vector2(void);
	Vector2(float x, float y);
	Vector2(const Vector2 &c);
};

#endif // define VECTOR2_H
