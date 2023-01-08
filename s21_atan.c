#include "s21_math.h"

long double s21_atan(double x) {
    long double res = s21_NAN;
    long double n;
    int i = 0;
    int sign = 1;
    if (!is_nan(x)) {
        if (fabs(x) < 1) {
            do {
                n = pow(x, 2 * i + 1) / (2 * i + 1);
                res += sign * n;
                i++;
                sign *= -1;
            } while (fabs(n) > 1e-16);
        }
        if (x > 1) {
            res = s21_PI/2 - s21_atan(1/x);
        }
        if (x < -1) {
            res = -s21_PI/2 - s21_atan(1/x);
        }
    }
    // добавить проверки на NAN и бесконечность,  заменить 1е-16, заменить pow
    return res;
}
