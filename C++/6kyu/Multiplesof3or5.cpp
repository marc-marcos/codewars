#include <iostream>

int get_sum_of_multiples_3_5(int n) {
  int total = 0;

  for (int i = 1; i < n; ++i) {
    if (!(i % 3) or !(i % 5)) {
      total += i;
    }
  }

  return total;
}

int main() {
  int n;

  while (std::cin >> n) {
    std::cout << get_sum_of_multiples_3_5(n) << "\n";
  }
}
