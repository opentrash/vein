#
# Makefile
# liyechen, 2019-04-29 10:18
# <gliyechen@hotmail.com>
#

CC := g++
CPPFLAGS := -lgtest -std=c++17
CPL := ${CC} ${CPPFLAGS}
EXE_TESTS := test test_vector2

test: test.o vector2.o
	@${CPL} -o $@ $^
	@./$@

test.o: vector2_test.h
	@${CPL} -c test.cpp


test_vector2: vector2_test.o vector2.o
	@${CPL} -o $@ $^
	@./$@

vector2_test.o: vector2_test.h vector2_test.cpp
	@${CPL} -c vector2_test.cpp

vector2.o: ../../core/math/vector2.h ../../core/math/vector2.cpp ../../core/math/math_funcs.h
	@${CPL} -c ../../core/math/vector2.cpp

.PHONY: clean
clean:
	@rm -f ${EXE_TESTS} *.o
	@echo "CLEANED"
# vim:ft=make
#
