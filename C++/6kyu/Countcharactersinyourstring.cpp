#include <iostream>
#include <map>
#include <string>

std::map<char, unsigned> count(const std::string &string) {
  std::map<char, unsigned> c = {};

  for (char c_act : string) {
    c[c_act]++;
  }

  return c;
}
