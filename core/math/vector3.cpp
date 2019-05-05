/*
 * Created by liyechen
 * Time 2019/05/05 15:35
 * Email <gliyechen@hotmail.com>
 */
 
#include "vector3.h"

Vector3::Vector3(void) {
	x = 0.0;
	y = 0.0;
	z = 0.0;
}

Vector3::Vector3(float _x, float _y, float _z) {
	x = _x;
	y = _y;
	z = _z;
}

Vector3::Vector3(const Vector3 &c) {
	x = c.x;
	y = c.y;
	z = c.z;
}
