#include "s21_math.h"

long double s21_asin(double x) {
    long double result = s21_NAN;
    if (-1 <= x && x <= 1) {
        long double y = x / pow((1 - x * x), 0.5);
        result = s21_atan(y);
    }
    // заменить pow, добавить проверки fabs(x) < 1 и прочую лабуду
    return result;
}
