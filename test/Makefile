#
# Makefile
# liyechen, 2019-04-28 15:08
# <gliyechen@hotmail.com>
#

CC := clang++
CPPFLAGS := -lgtest -std=c++14
CPL := ${CC} ${CPPFLAGS}

test: test.o Vector2.o
	@${CPL} -o test $^

test.o: math/Vector2_TEST.h
	@${CPL} -c test.cpp 

Vector2.o: ../core/math/Vector2.h ../core/math/Vector2.cpp
	@${CPL} -c ../core/math/Vector2.cpp

clean:
	@rm test *.o
	@echo "CLEANED"

# vim:ft=make
#
