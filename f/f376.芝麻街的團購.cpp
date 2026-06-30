#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> pos(n);
  for (int i = 0; i < n; i++) {
    cin >> pos[i];
  }

  sort(pos.begin(), pos.end());

  int target = pos[n / 2 - (n % 2 == 0)];
  cout << target;

  return 0;
}