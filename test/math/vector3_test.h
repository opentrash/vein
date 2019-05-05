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

TEST(VECTOR3, INIT)
{
	Vector3 a;
	EXPECT_FLOAT_EQ(a.x, 0.0);
	EXPECT_FLOAT_EQ(a.y, 0.0);
	EXPECT_FLOAT_EQ(a.z, 0.0);
}

TEST(VECTOR3, COORD)
{
	Vector3 a;
	a.x = 4.1;
	a.y = 4.2;
	EXPECT_FLOAT_EQ(a.coord[0], 4.1);
	EXPECT_FLOAT_EQ(a.coord[1], 4.2);
}

TEST(VECTOR3, COPY)
{
	Vector3 a(3.0, 4.0, 5.0);
	Vector3 b(a);
	bool isTrue = b.x == 3.0 && b.y == 4.0 && b.z == 5.0;

	EXPECT_TRUE(isTrue);
}

#endif /* !VECTOR3_TEST_H */
