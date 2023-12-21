#include <iostream>

bool isPrime(int num) {
  for (int i = 1; i * i <= num; ++i) {
    if (!(num % i) && (num != i && num != 1))
      return false;
  }

  return true;
}

int main() {
  int n;
  while (std::cin >> n) {
    std::cout << isPrime(n) << "\n";
  }
}
