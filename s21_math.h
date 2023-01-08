#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_
#define s21_eps 1e-16
#define s21_PI 3.14159265358979323846

// закомментированные константы вырезаны, может, не навсегда

// #define s21_E 2.7182818284590452354
// #define s21_LOG2E 1.4426950408889634074
// #define s21_LOG10E 0.43429448190325182765
// #define s21_LN2 0.69314718055994530942
// #define s21_LN10 2.30258509299404568402
// #define s21_SQRT2 1.41421356237309504880
// #define s21_SQRT1_2 0.70710678118654752440
// #define s21_2_SQRTPI 1.12837916709551257390
#define s21_INFINITY __builtin_inf()
#define s21_NAN __builtin_nanf("0x7fc00000")
#define is_fin(x) __builtin_isfinite(x)
#define is_inf(x) __builtin_isinf(x)
#define is_nan(x) __builtin_isnan(x)
#define is_norm(x) __builtin_isnormal(x)

int s21_abs(int x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double x);
long double s21_pow(double base, double exp); // неправильно
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);
double s21_factorial(long long int x);

#endif
