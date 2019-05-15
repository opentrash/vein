/*
 * vector3_test.h
 * Created by liyechen
 * Time 2019/05/05 15:41
 * email <gliyechen@hotmail.com>
 */

#ifndef VECTOR3_TEST_H
#define VECTOR3_TEST_H

#include "../test_headers.h"
#include "../../core/math/vector3.h"

TEST(VECTOR3, INIT) {
    Vector3 a;
    EXPECT_FLOAT_EQ(a.x, 0.0);
    EXPECT_FLOAT_EQ(a.y, 0.0);
    EXPECT_FLOAT_EQ(a.z, 0.0);
}

TEST(VECTOR3, COORD) {
    Vector3 a;
    a.x = 4.1;
    a.y = 4.2;
    EXPECT_FLOAT_EQ(a.coord[0], 4.1);
    EXPECT_FLOAT_EQ(a.coord[1], 4.2);
}

TEST(VECTOR3, COPY) {
    Vector3 a(3.0, 4.0, 5.0);
    Vector3 b(a);
    bool isTrue = b.x == 3.0 && b.y == 4.0 && b.z == 5.0;

    EXPECT_TRUE(isTrue);
}

TEST(VECTOR3, OPERATOR_PLUS) {
    Vector3 a(1.0, 2.0, 3.0), b(2.1, 3.4, -1.0);
    Vector3 c = a + b;
    EXPECT_FLOAT_EQ(c.x, 3.1);
    EXPECT_FLOAT_EQ(c.y, 5.4);
    EXPECT_FLOAT_EQ(c.z, 2.0);
}

TEST(VECTOR3, OPERATOR_MINUS) {
    Vector3 a(1.0, 2.0, -1.0), b(2.1, 3.4, 2.0);
    Vector3 c = a - b;
    EXPECT_FLOAT_EQ(c.x, -1.1);
    EXPECT_FLOAT_EQ(c.y, -1.4);
    EXPECT_FLOAT_EQ(c.z, -3.0);
}

TEST(VECTOR3, LENGTH) {
    Vector3 a(1.0, 2.0, 3.0);
    float len = a.length();
    EXPECT_FLOAT_EQ(len, 3.7416573868);
}

TEST(VECTOR3, LENGTH_SQUARED) {
    Vector3 a(1.0, 2.0, 3.0);
    EXPECT_FLOAT_EQ(14.0, a.length_squared());
}

TEST(VECTOR3, IS_NORMALIZED) {
    Vector3 a(1.0, 2.0, 3.0);
    EXPECT_FALSE(a.is_normalized());

    Vector3 b(0.6, 0.8, 0.0);
    EXPECT_TRUE(b.is_normalized());
}

TEST(VECTOR3, NORMALIZE) {
    Vector3 a(1.0, 2.0, 3.0);
    a.normalize();
    EXPECT_TRUE(a.is_normalized());

    EXPECT_FLOAT_EQ(a.x, 0.26726124);
    EXPECT_FLOAT_EQ(a.y, 0.53452248);
    EXPECT_FLOAT_EQ(a.z, 0.80178372);
}

TEST(VECTOR3, NORMALIZED) {
    Vector3 a(1.0, 2.0, 3.0);
    Vector3 b = a.normalized();
    EXPECT_TRUE(b.is_normalized());

    EXPECT_FLOAT_EQ(b.x, 0.26726124);
    EXPECT_FLOAT_EQ(b.y, 0.53452248);
    EXPECT_FLOAT_EQ(b.z, 0.80178372);
}

TEST(VECTOR3, DOT) {
    Vector3 a(1.0, 2.0, 3.0);
    Vector3 b(2.0, -1.0, 0.0);
    EXPECT_FLOAT_EQ(0.0, a.dot(b));
    EXPECT_FLOAT_EQ(0.0, b.dot(a));
}


#endif /* !VECTOR3_TEST_H */
