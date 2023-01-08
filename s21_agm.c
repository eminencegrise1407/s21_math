#include "math.h"

long double s21_agm(double x, double y){
    double a, g;
    while(s21_fabs(x - y) > 1e-16) {
        a = (x + y) / 2.0;
        g = s21_pow(x * y, 0.5);

        x = a;
        y = g;
    }
    return x;
}
