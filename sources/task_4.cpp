// Copyright 2018 Your Name <your_email>

#include <iostream>
#include <tasks.hpp>
#include <vector>

using namespace std;

// Task 4.
void remove_negative(std::vector<int>& A) {
  int n = A.size();
  for (int i = 0; i < n; i++) {
    if (A[i] < 0) {
      A.erase(A.begin() + (i));
      break;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << A[i] << " ";
  }
}

void remove_last_even(std::vector<int>& A) {
  int n = A.size(); int i1 = 0;
  for (int i = 0; i < n; i++) {
    if (A[i] % 2 == 0) {
      i1 = i;
    }
  }
  if (A[i1] % 2 == 0) {
    A.erase(A.begin() + i1);
  }
}
