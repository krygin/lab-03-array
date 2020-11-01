// Copyright 2018 Your Name <your_email>

#include <iostream>
#include <tasks.hpp>
#include <vector>

using namespace std;

// Task 2.
int sum(const std::vector<int>& A) {
  int sum1 = 0;
  int n = A.size();
  for (int i = 0; i < n; i++) {
    sum1 += A[i];
  }
  return sum1;
}

int square_sum(const std::vector<int>& A) {
  int sum2 = 0;
  int n = A.size();
  for (int i = 0; i < n; i++) {
    sum2 += A[i]*A[i];
  }
  return sum2;
}

int sum_six(const std::vector<int>& A) {
  int sum3 = 0;
  for (int i = 0; i < 6; i++) {
    sum3 += A[i];
  }
  return sum3;
}

int sum_k(const std::vector<int>& A, int k1, int k2) {
  int sum4 = 0;
  for (int i = k1; i < k2+1; i++) {
    sum4 += A[i];
  }
  return sum4;
}

int mean(const std::vector<int>& A) {
  float sum5 = 0;
  int n = A.size();
  for (int i = 0; i < n; i++) {
    sum5 += A[i];
  }
  return (sum5/n);
}

int mean_k(const std::vector<int>& A, int s1, int s2) {
  float sum6 = 0;
  int n = s2+1 - s1;
  for (int i = s1; i < s2+1; i++) {
    sum6 += A[i];
  }
  return (sum6/n);
}
