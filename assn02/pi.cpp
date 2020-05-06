#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int calcHits(const int coordinates[]) {
  
}
int n = 5;
int main() {
  int hits = 0;
  for (int i = 0; i < n; i++) {
    double x = rand() /  (double)RAND_MAX, y = rand() / (double)RAND_MAX;
    cout << x << " " << y << '\n';

    if(sqrt(x * x + y * y) < 1) {
      ++hits;
    }
  }
  cout << "hits " << hits << "\n";
}
