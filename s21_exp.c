#include "s21_math.h"

long double s21_exp(double x) {
  long double result = 1;
  long double n = 1;
  int i = 1;
  if (is_nan(x)) {
    result = s21_NAN;
  } 
  if (is_inf(x)) {
    if (x < 0){
        result = 0;
    } else {
        result = s21_INFINITY;
    }
  } else {
    do {
      n *= x/i;
      result += n;
      i++;
    } while (s21_fabs(n) > 1e-16);
  }
  return result;
}
