#include "s21_math.h"

// вспомогательная функция, никто о ней не просил, но она нужна

double s21_factorial(long long int x) {
    long double res;
    if (x == 1 || x == 0) {
        return 1;
    }
    if (x < 0) {
        return 0;
    }
    res = x * s21_factorial(x - 1);
    return res;
}