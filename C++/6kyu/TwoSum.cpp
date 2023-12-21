#include <iostream>
#include <vector>

std::pair<int, int> two_sum(std::vector<int> v, int n) {
  int v_size = v.size();

  for (int i = 0; i < v_size; ++i) {
    for (int j = i + 1; j < v_size; ++j) {
      if (v[i] + v[j] == n)
        return std::make_pair(i, j);
    }
  }

  return std::make_pair(-1, -1);
}

int main() {
  std::vector<int> v = {1234, 5678, 9012};
  std::pair<int, int> resultado = two_sum(v, 14690);

  std::cout << resultado.first << " " << resultado.second << std::endl;
}
