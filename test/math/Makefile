#
# Makefile
# liyechen, 2019-04-29 10:18
# <gliyechen@hotmail.com>
#

CC := g++
CPPFLAGS := -lgtest -std=c++14
CPL := ${CC} ${CPPFLAGS}

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

Vector2.o: ../../core/math/Vector2.h ../../core/math/Vector2.cpp
	@${CPL} -c ../../core/math/Vector2.cpp


clean:
	@rm test test_vector2 *.o
	@echo "CLEANED"
# vim:ft=make
#
