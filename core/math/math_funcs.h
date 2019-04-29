/*
 * math_funcs.h
 * Created by liyechen
 * Time 2019/04/29 12:47
 * email <gliyechen@hotmail.com>
 */

#ifndef MATH_FUNCS_H
#define MATH_FUNCS_H

#include <math.h>

template<class T>
typename std::enable_if<!std::numeric_limits<T>::is_integer, bool>::type 
	almost_equal(T x, T y, int ulp)
{
    // the machine epsilon has to be scaled to the magnitude of the values used
    // and multiplied by the desired precision in ULPs (units in the last place)
    return abs(x - y) <= std::numeric_limits<T>::epsilon() * abs(x + y) * ulp
        // unless the result is subnormal
        || abs(x - y) < std::numeric_limits<T>::min();
}

#endif /* !MATH_FUNCS_H */
