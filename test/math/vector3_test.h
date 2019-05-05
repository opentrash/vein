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

#endif /* !VECTOR3_TEST_H */
