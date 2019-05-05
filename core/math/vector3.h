/*
 * vector3.h
 * Created by liyechen
 * Time 2019/05/05 15:34
 * email <gliyechen@hotmail.com>
 */

#ifndef VECTOR3_H
#define VECTOR3_H

struct Vector3 {
	union {
		struct {
			float x;
			float y;
			float z;
		};
		float coord[3];
	};
	Vector3(void);
	Vector3(float _x, float _y, float _z);
	Vector3(Vector3 const &c);
};

#endif /* !VECTOR3_H */
