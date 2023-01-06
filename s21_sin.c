#include "s21_math.h"
long double s21_sin(double x) {
  long double sum = 0;
  double n = x;
  int i = 1;
  do {
    sum += n;
    n *= -1 * x * x / ((2 * i) * (2 * i + 1));
    i += 1;
  } while (s21_fabs(n) > s21_eps);
  return sum;
}
