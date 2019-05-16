/*
 * math_funcs.h
 * Created by liyechen
 * Time 2019/05/16 16:42
 * email <gliyechen@hotmail.com>
 */

#ifndef MATH_FUNCS_TEST_H
#define MATH_FUNCS_TEST_H

#include "../test_headers.h"
#include "../../core/math/math_funcs.h"

TEST(MATH_FUNCS, ALMOST_EQUAL) {
    bool eq1 = almost_equal(0.1 + 0.2, 0.3, 2);
    bool eq2 = almost_equal(0.1 + 0.2, 0.31, 2);
    EXPECT_TRUE(eq1);
    EXPECT_FALSE(eq2);
}

#endif /* !MATH_FUNCS_TEST_H */
