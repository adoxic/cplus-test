#include <iostream>

using namespace std;

int summerForInt(const int a, const int b) {
  return a * b;
};

double summerForDouble(const double a, const double b) {
  return a * b;
};

int main() {
  
  int one = 3;
  int two = 2;
  cout << summerForInt(one, two) << "\n";

  double a = 0.5;
  double b = 4.1;
  cout << summerForDouble(a, b) << "\n";
}
