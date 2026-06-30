#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main() {
  int n;
  cin >> n;
  unordered_map<int, bool> color;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    a[i] = abs(temp);
    color[a[i]] = temp > 0;
  }

  sort(a.begin(), a.end());

  int ans = 0;

  bool prev = color[a[0]];
  for (int i : a) {
    if (color[i] != prev) {
      ans++;
      prev = color[i];
    }
  }

  cout << ans;

  return 0;
}