/*
 * vector3.h
 * Created by liyechen
 * Time 2019/05/05 15:34
 * email <gliyechen@hotmail.com>
 */

#ifndef VECTOR3_H
#define VECTOR3_H

#include "math_funcs.h"

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

    Vector3 operator+(Vector3 const &obj);
    Vector3 operator-(Vector3 const &obj);

    float length() const;
    float length_squared() const;
    bool is_normalized() const;
    void normalize();
    Vector3 normalized() const;
};

inline float Vector3::length() const {
    float x2 = x * x;
    float y2 = y * y;
    float z2 = z * z;
    return sqrtf(x2 + y2 + z2);
}

inline float Vector3::length_squared() const {
    return x * x + y * y + z * z;
}

inline bool Vector3::is_normalized() const {
    float len = length();
    return almost_equal(len, static_cast<float>(1.0), 2);
}

inline void Vector3::normalize() {
    float len = length();
    if (len != 0.0) {
        x /= len;
        y /= len;
        z /= len;
    }
}

inline Vector3 Vector3::normalized() const {
    Vector3 target = *this;
    target.normalize();
    return target;
}

#endif /* !VECTOR3_H */
