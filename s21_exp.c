#include "s21_math.h"
#include <math.h>

long double s21_exp(double x) {
  long double result = 0;
  long double n;
  int i = 0;
  if (isnan(x)) {
    result = s21_NAN;
  } 
  if (isinf(x)) {
    if (x < 0){
        result = 0;
    } else {
        result = s21_INFINITY;
    }
  } else {
    do {
      n = pow(x, i) / s21_factorial(i);
      result += n;
      i++;
    } while (n > 1e-16);
  }
  // добавить проверки на NAN и бесконечность,  заменить 1е-16, заменить pow
  // и потестить еще, а то мало тестил
  return result;
}
