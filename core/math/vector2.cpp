#include "vector2.h"

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

