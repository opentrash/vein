/*
 * Vector2_TEST.h
 * Created by liyechen
 * Time 2019/04/28 15:21
 * email <gliyechen@hotmail.com>
 */

#ifndef VECTOR2_TEST_H
#define VECTOR2_TEST_H

#include "../test_headers.h"
#include "../../core/math/vector2.h"

TEST(VECTOR2, INIT) {
    Vector2 a;
    EXPECT_FLOAT_EQ(a.x, 0.0);
    EXPECT_FLOAT_EQ(a.y, 0.0);
}

TEST(VECTOR2, COORD) {
    Vector2 a;
    a.x = 3.0;
    EXPECT_FLOAT_EQ(a.coord[0], 3.0);
}

TEST(VECTOR2, COPY) {
    Vector2 a(3.0, 4.0);
    Vector2 b(a);
    bool isTrue = b.x == 3.0 && b.y == 4.0;

    EXPECT_TRUE(true);
}

TEST(VECTOR2, LENGTH) {
    Vector2 a(3.0, 4.0);
    Vector2 b;
    float lengthA = a.length();
    float lengthB = b.length();
    EXPECT_FLOAT_EQ(lengthA, 5.0);
    EXPECT_FLOAT_EQ(lengthB, 0.0);
}

TEST(VECTOR2, LENGTH_SQUARED) {
    Vector2 a(3.0, 4.0);
    EXPECT_FLOAT_EQ(25.0, a.length_squared());
}

TEST(VECTOR2, DOT) {
    Vector2 a(3.0, 4.0);
    Vector2 b(1.0, 0.0);
    EXPECT_FLOAT_EQ(3, a.dot(b));
    EXPECT_FLOAT_EQ(3, b.dot(a));
}

TEST(VECTOR2, NORMALIZED) {
    Vector2 a(3.0, 4.0);
    Vector2 target = a.normalized();
    EXPECT_FLOAT_EQ(target.x, 0.6);
    EXPECT_FLOAT_EQ(target.y, 0.8);
    Vector2 b;
    Vector2 target_b = b.normalized();
    EXPECT_FLOAT_EQ(target_b.x, 0.0);
    EXPECT_FLOAT_EQ(target_b.y, 0.0);
}

TEST(VECTOR2, NORMALIZE) {
    Vector2 a(3.0, 4.0);
    a.normalize();
    EXPECT_FLOAT_EQ(a.x, 0.6);
    EXPECT_FLOAT_EQ(a.y, 0.8);
    Vector2 b;
    b.normalize();
    EXPECT_FLOAT_EQ(b.x, 0.0);
    EXPECT_FLOAT_EQ(b.y, 0.0);
}

TEST(VECTOR2, IS_NORMALIZED) {
    Vector2 a;
    Vector2 b(1.0, 0.0);
    Vector2 c(0.6, 0.8);
    Vector2 d(0.6, 0.9);
    EXPECT_TRUE(b.is_normalized());
    EXPECT_TRUE(c.is_normalized());
    EXPECT_FALSE(a.is_normalized());
    EXPECT_FALSE(d.is_normalized());
}

TEST(VECTOR2, OPERATOR_PLUS) {
    Vector2 a(1.0, 2.0), b(2.1, 3.4);
    Vector2 c = a + b;
    EXPECT_FLOAT_EQ(c.x, 3.1);
    EXPECT_FLOAT_EQ(c.y, 5.4);
}

TEST(VECTOR2, OPERATOR_PLUS_EQUAL) {
    Vector2 a(1.0, 2.0), b(2.1, 3.4);
    a += b;
    EXPECT_FLOAT_EQ(a.x, 3.1);
    EXPECT_FLOAT_EQ(a.y, 5.4);
}

TEST(VECTOR2, OPERATOR_MINUS) {
    Vector2 a(1.0, 2.0), b(2.1, 3.4);
    Vector2 c = a - b;
    EXPECT_FLOAT_EQ(c.x, -1.1);
    EXPECT_FLOAT_EQ(c.y, -1.4);
}

TEST(VECTOR2, OPERATOR_MINUS_EQUAL) {
    Vector2 a(1.0, 2.0), b(2.1, 3.4);
    a -= b;
    EXPECT_FLOAT_EQ(a.x, -1.1);
    EXPECT_FLOAT_EQ(a.y, -1.4);
}

TEST(VECTOR2, OPERATOR_MULTI) {
    Vector2 a(1.0, 2.0);
    Vector2 b = a * 3.0;
    EXPECT_FLOAT_EQ(b.x, 3.0);
    EXPECT_FLOAT_EQ(b.y, 6.0);
    a *= 3.0;
    EXPECT_FLOAT_EQ(a.x, 3.0);
    EXPECT_FLOAT_EQ(a.y, 6.0);
}

#endif /* !VECTOR2_TEST_H */
