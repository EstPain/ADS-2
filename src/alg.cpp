// Copyright 2022 NNTU-CS
#include <cstdint>
#include <iostream>
#include "alg.h"

double pown(double value, uint16_t n) {
  double result = 1;
  if (n == 0) {
    return result;
  } else {
    for (int i = 1; i <= n; i++) {
      result = value * result;
    }
  }
  return result;
}
uint64_t fact(uint16_t n) {
  if (n <= 1)
    return 1;
  else
    return n * fact(n - 1);
}
double calcItem(double x, uint16_t n) {
  double result;
  result = pown(x, n) / fact(n);
  return result;
}
double expn(double x, uint16_t count) {
  double result = 0;
  for (int i = 0; i <= count; i++) {
    result += calcItem(x, i);
  }
  return result;
}
double sinn(double x, uint16_t count) {
  double result = 0;
  for (int i = 1; i <= count; i++) {
    result += pown(-1.0, (i - 1)) * calcItem(x, (2 * i - 1));
  }
  return result;
}
double cosn(double x, uint16_t count) {
  double result = 0;
  for (int i = 1; i <= count; i++) {
    result += pown(-1.0, (i - 1)) * calcItem(x, (2 * i - 2));
  }
  return result;
}
