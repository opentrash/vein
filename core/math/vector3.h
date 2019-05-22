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

    Vector3 operator+(const Vector3 &obj) const;
    void operator+=(const Vector3 &obj);

    Vector3 operator-(const Vector3 &obj) const;
    void operator-=(const Vector3 &obj);

    float length() const;
    float length_squared() const;
    bool is_normalized() const;
    void normalize();
    Vector3 normalized() const;

    float dot(const Vector3 &target) const;
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

inline Vector3 Vector3::operator+(const Vector3 &obj) const {
    Vector3 sum;
    sum.x = x + obj.x;
    sum.y = y + obj.y;
    sum.z = z + obj.z;
    return sum;
}

inline void Vector3::operator+=(const Vector3 &obj) {
    x = x + obj.x;
    y = y + obj.y;
    z = z + obj.z;
}

inline Vector3 Vector3::operator-(const Vector3 &obj) const {
    Vector3 diff;
    diff.x = x - obj.x;
    diff.y = y - obj.y;
    diff.z = z - obj.z;
    return diff;
}

inline void Vector3::operator-=(const Vector3 &obj) {
    x = x - obj.x;
    y = y - obj.y;
    z = z - obj.z;
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

inline float Vector3::dot(const Vector3 &target) const {
    return x * target.x + y * target.y + z * target.z;
}

#endif /* !VECTOR3_H */
