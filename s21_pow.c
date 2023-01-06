 #include "s21_math.h"
 
long double s21_pow(double base, double num) {
  long double res = 0;
  if (num == 0) {
      res = 1.0;
  } else if (num < 0) {
    res = 1/(exp(-num *log(base)));
  } else {
    res = exp(num *log(base));
  }
  return res;
}
