#include <iostream>
#include <string>

using namespace std;

bool check(int n) {
  while (n != 0) {
    if (((n % 10) % 2) != 0) return false;
    n /= 10;
  }

  return true;
}

int main() {
  int n;
  cin >> n;

  if (check(n)) {
    cout << "0\n";
    return 0;
  }

  int down_dist = 1e+9;
  for (int i = n - 1; i >= 1; i--) {
    if (check(i)) {
      down_dist = n - i;
      break;
    }
  }

  int up_dist = 1e+9;
  for (int i = n + 1;; i++) {
    if (check(i)) {
      up_dist = i - n;
      break;
    }
  }

  cout << min(down_dist, up_dist) << "\n";

  return 0;
}