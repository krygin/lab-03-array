// Copyright 2018 Your Name <your_email>

#include <iostream>
#include <string>
#include <tasks.hpp>

using namespace std;

// Task 5.
bool name_is_even(const std::string& str) {
  int n = str.length(); bool t;
  if (n % 2 == 0) {
    t = true;
  } else {
    t = false;
  }
  return t;
}

// Task 6.
bool first_is_longer(const std::string& name_one,
                     const std::string& name_two) {
  bool t;
  if (name_one > name_two) {
    t = true;
  } else {
    t = false;
  }
  return t;
}

// Task 7.
void longest_shortest(const std::string& name_one, const std::string& name_two,
                      const std::string& name_three, std::string& the_longest,
                      std::string& the_shortest) {
  the_longest = max(name_one, max(name_two, name_three));
  the_shortest = min(name_one, min(name_two, name_three));
}

// Task 8.
std::string sub_str(const std::string& word, int m, int n) {
  return std::string(word.substr(m, n - m +1));
}

// Task 9.
void add_stars(std::string& word) {
  char star = '*';
  std::string insert_stars(word.length(), star);
  word = insert_stars + word + insert_stars;
}

// Task 10.
int percent_of_a(const std::string& word) {
  float length = word.length(); float count = 0; char a = 'a';
  for (int i = 0; i < length; i++) {
    if (word[i] == a) {
      count++;
    }
  }
  float percent = count/length;
  return (100 * percent);
}

// Task 11.
std::string replace_can(const std::string& new_word) {
  std::string word = "Can you can a can as a canner can can a can?";
  bool flag = true;
  int pos = 0;
  while (flag) {
    pos = word.find("can", 0);
    if (pos != (int)std::string::npos) {
      word.replace(pos, 3, new_word);
    }
    if (pos == (int)std::string::npos){
      flag = false;
    }
  }
  return word;
}