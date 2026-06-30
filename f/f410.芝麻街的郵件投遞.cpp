#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <functional>

using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> even;
  vector<int> odd;
  int temp;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    if (temp % 2 == 0) {
      // even
      even.push_back(temp);
    } else {
      odd.push_back(temp);
    }
  }

  vector<int> ans;
  sort(even.begin(), even.end());
  sort(odd.begin(), odd.end(), std::greater<>());

  ans.insert(ans.end(), even.begin(), even.end());
  ans.insert(ans.end(), odd.begin(), odd.end());

  for (int i : ans) {
    cout << i << " ";
  }

  return 0;
}