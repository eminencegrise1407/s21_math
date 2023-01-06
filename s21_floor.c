#include "s21_math.h"

long double s21_floor(double x) {
  int count = 0;
  double y = 0;
  if (x < 0) {
    y = x * (-1);
  } else {
    y = x;
  }
  for (count = 0; count < y; count++) {
  }
  if (x < 0) {
    return (count - 1) * -1;
  } else {
    return (count - 1);
  }
}