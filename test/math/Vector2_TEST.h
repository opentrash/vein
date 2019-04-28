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
	EXPECT_EQ(a.x, 0.0);
	EXPECT_EQ(a.y, 0.0);
}

TEST(VECTOR2, COPY)
{
	Vector2 a(1.0, 2.0);
	Vector2 b(a);
	bool isTrue = b.x == 1.0 && b.y == 2.0;
	
	EXPECT_TRUE(true);
}


#endif /* !VECTOR2_TEST_H */
