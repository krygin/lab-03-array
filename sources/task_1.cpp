// Copyright 2018 Your Name <your_email>

#include <iostream>
#include <vector>
#include <tasks.hpp>

using namespace std;

// Task 1.
void multi_2(std::vector<int>& A) {
  int n = A.size();
  for (int i = 0; i < n; i++) {
    A[i] = 2*A[i];
  }
}

void reduce_a(std::vector<int>& A, int a) {
  int n = A.size();
  for (int i = 0; i < n; i++) {
    A[i] = A[i] - a;
  }
}

void div_on_first(std::vector<int>& A) {
  int n = A.size();
  int div = A[0];
  for (int i = 0; i < n; i++) {
    A[i]  = A[i]/div;
  }
}
