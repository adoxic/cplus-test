#include <iostream>

using namespace std;

double sum(const double a, const double b) {
  return a + b;
}

int sum(int a, int b, int c = 0, int d = 0) {
  return a + b + c + d;
}

int main() {
  cout << sum(3, 2) << "\n";

  cout << sum(0.3, 3.2) << "\n";

  cout << sum(2, 4) << "\n";

  cout << sum(2, 4, 3, 2) << "\n";
}
