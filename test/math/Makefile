#
# Makefile
# liyechen, 2019-04-29 10:18
# <gliyechen@hotmail.com>
#

CC := g++
CPPFLAGS := -lgtest -std=c++17
CPL := ${CC} ${CPPFLAGS}
EXE_TESTS := test test_vector2

test: test.o Vector2.o
	@${CPL} -o $@ $^
	@./$@

test.o: Vector2_TEST.h
	@${CPL} -c test.cpp


test_vector2: Vector2_TEST.o Vector2.o
	@${CPL} -o $@ $^
	@./$@

Vector2_TEST.o: Vector2_TEST.h Vector2_TEST.cpp
	@${CPL} -c Vector2_TEST.cpp

Vector2.o: ../../core/math/Vector2.h ../../core/math/Vector2.cpp ../../core/math/math_funcs.h
	@${CPL} -c ../../core/math/Vector2.cpp

.PHONY: clean
clean:
	@rm -f ${EXE_TESTS} *.o
	@echo "CLEANED"
# vim:ft=make
#
