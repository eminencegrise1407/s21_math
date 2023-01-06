#include <check.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


#include "s21_math.h"
// START_TEST(s21_abs_test) { 
//   int num = 23;
//   ck_assert_int_eq(s21_abs(num), abs(num));

//   int num2 = 200000;
//   ck_assert_int_eq(s21_abs(num2), abs(num2));

//   int num3 = -200000;
//   ck_assert_int_eq(s21_abs(num3), abs(num3));
// }
// END_TEST

// START_TEST(s21_fabs_test) {
//   double num = 23.34;
//   ck_assert_ldouble_eq(s21_fabs(num), fabs(num));

//   double num2 = 200000.567;
//   ck_assert_ldouble_eq(s21_fabs(num2), fabs(num2));

//   double num3 = -200000.456784;
//   ck_assert_ldouble_eq(s21_fabs(num3), fabs(num3));
// }
// END_TEST

// START_TEST(s21_ceil_test) {
//   double num = 23.34;
//   ck_assert_ldouble_eq_tol(s21_ceil(num), ceil(num), 1e-6);

//   double num2 = 200000.567;
//   ck_assert_ldouble_eq_tol(s21_ceil(num2), ceil(num2), 1e-6);

//   double num3 = -200000.456784;
//   ck_assert_ldouble_eq_tol(s21_ceil(num3), ceil(num3), 1e-6);
// }
// END_TEST

// START_TEST(s21_pow_test) {
//   double num = 4;
//   ck_assert_ldouble_eq_tol(s21_pow(num, 0.5), pow(num, 0.5), 1e-6);
//   double num2 = -1;
//   ck_assert_ldouble_nan(s21_pow(num2, 10.0 ));
//   double num3 = 23;
//   ck_assert_ldouble_eq_tol(s21_pow(num3, 4), pow(num3, 4), 1e-6);
// }
// END_TEST

START_TEST(s21_sin_test) {
  double x = 0.0;
  ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), 1e-6);
  x = 23.34;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), 1e-6);
  x = 200000.567;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), 1e-6);
  x = -200000.456784;
  ck_assert_ldouble_eq_tol(s21_sin(x), sin(x), 1e-6);

}
END_TEST

// START_TEST(s21_tan_test) {
//   double num = 23.34;
//   ck_assert_ldouble_eq_tol(s21_tan(num), tan(num),, 1e-6);

//   double num2 = 200000.567;
//   ck_assert_ldouble_eq_tol(s21_tan(num2), tan(num2), 1e-6);

//   double num3 = -200000.456784;
//   ck_assert_ldouble_eq_tol(s21_tan(num3), tan(num3), 1e-6);

//   double num4 = 0;
//   ck_assert_ldouble_eq_tol(s21_tan(num4), tan(num4), 1e-6);
// }
// END_TEST

// START_TEST(s21_cos_test) {
//   double num = 23.34;
//   ck_assert_ldouble_eq_tol(s21_cos(num), cos(num), 1e-6);

//   double num2 = 200000.567;
//   ck_assert_ldouble_eq_tol(s21_cos(num2), cos(num2), 1e-6);

//   double num3 = -200000.456784;
//   ck_assert_ldouble_eq_tol(s21_cos(num3), cos(num3), 1e-6);

//   double num4 = 0;
//   ck_assert_ldouble_eq_tol(s21_cos(num4), cos(num4), 1e-6);
// }
// END_TEST

int main(void) {
  Suite *s = suite_create("s21_math");
  TCase *tc = tcase_create("s21_math");
  SRunner *sr = srunner_create(s);
  int nf;
  suite_add_tcase(s, tc);

  // tcase_add_test(tc, s21_abs_test);//works ;)
  // tcase_add_test(tc, s21_fabs_test); //works ;)
  // tcase_add_test(tc, s21_ceil_test);//works ;)
  // tcase_add_test(tc, s21_pow_test); // works ;)
  tcase_add_test(tc, s21_sin_test);//WTF is happening? 
  // tcase_add_test(tc, s21_tan_test); //Dosnt work because of sin
  // tcase_add_test(tc, s21_cos_test); //Dosnt work because of sin

  srunner_run_all(sr, CK_ENV);
  nf = srunner_ntests_failed(sr);
  srunner_free(sr);
  return nf == 0 ? 0 : 1;
}
