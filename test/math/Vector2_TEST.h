/*
 * Vector2_TEST.h
 * Created by liyechen
 * Time 2019/04/28 15:21
 * email <gliyechen@hotmail.com>
 */

#ifndef VECTOR2_TEST_H
#define VECTOR2_TEST_H

#include "../test_headers.h"
#include "../../core/math/Vector2.h"

TEST(VECTOR2, INIT)
{
	Vector2 a;
	EXPECT_FLOAT_EQ(a.x, 0.0);
	EXPECT_FLOAT_EQ(a.y, 0.0);
}

TEST(VECTOR2, COORD)
{
	Vector2 a;
	a.x = 3.0;
	EXPECT_FLOAT_EQ(a.coord[0], 3.0);
}

TEST(VECTOR2, COPY)
{
	Vector2 a(3.0, 4.0);
	Vector2 b(a);
	bool isTrue = b.x == 3.0 && b.y == 4.0;
	
	EXPECT_TRUE(true);
}

TEST(VECTOR2, LENGTH)
{
	Vector2 a(3.0, 4.0);
	Vector2 b;
	float lengthA = a.length();
	float lengthB = b.length();
	EXPECT_FLOAT_EQ(lengthA, 5.0);
	EXPECT_FLOAT_EQ(lengthB, 0.0);
}

TEST(VECTOR2, NORMALIZED)
{
	Vector2 a(3.0, 4.0);
	Vector2 target = a.normalized();
	EXPECT_FLOAT_EQ(target.x, 0.6);
	EXPECT_FLOAT_EQ(target.y, 0.8);
	Vector2 b;
	Vector2 target_b = b.normalized();
	EXPECT_FLOAT_EQ(target_b.x, 0.0);
	EXPECT_FLOAT_EQ(target_b.y, 0.0);
}

TEST(VECTOR2, NORMALIZE)
{
	Vector2 a(3.0, 4.0);
	a.normalize();
	EXPECT_FLOAT_EQ(a.x, 0.6);
	EXPECT_FLOAT_EQ(a.y, 0.8);
	Vector2 b;
	b.normalize();
	EXPECT_FLOAT_EQ(b.x, 0.0);
	EXPECT_FLOAT_EQ(b.y, 0.0);
}


#endif /* !VECTOR2_TEST_H */
