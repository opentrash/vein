#
# Makefile
# liyechen, 2019-04-29 10:18
# <gliyechen@hotmail.com>
#

CC := g++
CPPFLAGS := -std=c++17
LINKFLAGS := -lgtest 
CPL := ${CC} ${LINKFLAGS} ${CPPFLAGS}
EXE_TESTS := test test_vector2 test_vector3

test: test.o vector2.o vector3.o
    @${CPL} -o $@ $^
    @./$@

test.o: vector2_test.h vector3_test.h
    @${CC} ${CPPFLAGS} -c test.cpp


test_vector2: vector2_test.o vector2.o
    @${CPL} -o $@ $^
    @./$@

vector2_test.o: vector2_test.h vector2_test.cpp
    @${CPL} -c vector2_test.cpp

vector2.o: ../../core/math/vector2.h ../../core/math/vector2.cpp ../../core/math/math_funcs.h
    @${CC} ${CPPFLAGS} -c ../../core/math/vector2.cpp

test_vector3: vector3_test.o vector3.o
    @${CPL} -o $@ $^
    @./$@

vector3_test.o: vector3_test.h vector3_test.cpp
    @${CPL} -c vector3_test.cpp

vector3.o: ../../core/math/vector3.h ../../core/math/vector3.cpp ../../core/math/math_funcs.h
    @${CC} ${CPPFLAGS} -c ../../core/math/vector3.cpp


.PHONY: clean
clean:
    @rm -f ${EXE_TESTS} *.o
    @echo "CLEANED"
# vim:ft=make
#
