#include "s21_math.h"

long double s21_log(double x) {
    double result = 0;
    double z, y;
    double power = 1.0;

    z = (x + 1) / (x - 1);
    double step = ((x - 1) * (x - 1)) / ((x + 1) * (x + 1));
    while (z > 1e-16)
    {
        z *= step;
        y = (1 / power) * z;
        result = result + y;
        power = power + 2;
    }
    // добавить проверку на x < 0 и прочую лабуду, заменить 1e-16
    return 2 * result;
}