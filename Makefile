GCC = gcc
CFLAGS = -c -Wall -Werror -Wextra -std=c11
LDFLAGS = -O2 -Wall -Werror -Wextra -std=c11
SOURCE = $(wildcard s21_*.c)
HEADER = $(wildcard s21_*.h)
OBJECTS = $(patsubst %.c,%.o, ${SOURCE})
# TESTS_SOURCE = tests_1.c
TESTS_OBJECTS = $(patsubst %.c,%.o, ${TESTS_SOURCE})
UNAME_S := $(shell uname -s)

all: clean s21_math.a test

s21_math.a: ${SOURCE}
	$(GCC) $(CFLAGS) $(ADD_LIB) $(SOURCE)
	ar rc $@ $(OBJECTS)
	ranlib $@
	cp $@ lib$@

# test: ${TESTS_SOURCE} s21_math.a
# 	${GCC} $(LDFLAGS) -o test $^ -lcheck -lm
# 	./test

# gcov_report: clean lcov ${SOURCE}
# 	gcc --coverage $(ADD_LIB) ${SOURCE} ${TESTS_SOURCE} -o s21_test -lcheck -lm
# 	./s21_test
# 	lcov -t "s21_test" -o s21_test.info -c -d .
# 	genhtml -o report s21_test.info

# lcov:
# ifeq ("", "$(shell PATH=$(PATH) which lcov)")
# 	$(error Need to install lcov)
# endif

clean:
	-rm -rf *.o && rm -rf *.gcno
	-rm -rf *.a && rm -rf *.gcda
	-rm -rf *.info && rm -rf *.gcov
	-rm -rf ./test && rm -rf ./gcov_report
	-rm -rf ./report/
	-rm -rf ./s21_test
