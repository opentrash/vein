#
# Makefile
# liyechen, 2019-04-29 10:18
# <gliyechen@hotmail.com>
#

UNAME_S := $(shell uname -s)

CC := g++
CPPFLAGS := -std=c++17
LINKFLAGS :=

ifeq ($(UNAME_S), Linux)
	LINKFLAGS += /usr/local/lib/libgtest.a -lpthread
endif
ifeq ($(UNAME_S), Darwin)
	LINKFLAGS += -lgtest
endif

CPL := ${CC} ${LINKFLAGS} ${CPPFLAGS}

EXE_TESTS := test test_vector2 test_vector3 math_funcs_test
TEST_OBJECTS := vector2.o vector3.o
TEST_HEADERS := vector2_test.h vector3_test.h math_funcs_test.h

test: test.o ${TEST_OBJECTS}
	@${CC} $^ ${LINKFLAGS} ${CPPFLAGS} -o $@
	@./$@

test.o: ${TEST_HEADERS}
	@${CC} ${CPPFLAGS} -c test.cpp

math_funcs_test: math_funcs_test.o
	@${CC} $^ ${LINKFLAGS} ${CPPFLAGS} -o $@
	@./$@

math_funcs_test.o: ../../core/math/math_funcs.h math_funcs_test.h 
	@${CC} ${CPPFLAGS} -c math_funcs_test.cpp

test_vector2: vector2_test.o vector2.o
	@${CC} $^ ${LINKFLAGS} ${CPPFLAGS} -o $@
	@./$@

vector2_test.o: vector2_test.h vector2_test.cpp
	@${CC} ${CPPFLAGS} -c vector2_test.cpp

vector2.o: ../../core/math/vector2.h ../../core/math/vector2.cpp ../../core/math/math_funcs.h
	@${CC} ${CPPFLAGS} -c ../../core/math/vector2.cpp

test_vector3: vector3_test.o vector3.o
	@${CC} $^ ${LINKFLAGS} ${CPPFLAGS} -o $@
	@./$@

vector3_test.o: vector3_test.h vector3_test.cpp
	@${CC} ${CPPFLAGS} -c vector3_test.cpp

vector3.o: ../../core/math/vector3.h ../../core/math/vector3.cpp ../../core/math/math_funcs.h
	@${CC} ${CPPFLAGS} -c ../../core/math/vector3.cpp


.PHONY: clean
clean:
	@rm -f ${EXE_TESTS} *.o
	@echo "CLEANED"
# vim:ft=make
#
