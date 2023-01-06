#include "s21_math.h"
int s21_abs(int x) {
  if (x < 0) {
    return x * (-1);
  } else {
    return x;
  }
}

// long double s21_E(double x) {
//   long double e = 0;
//   for (int i = 1; i <= x;
//        i++) {  // ряд тейлора, за точность берем количество знаков после
//        запятой
//     x = x * i;
//     e = e + 1 / x;
//   }
// }
