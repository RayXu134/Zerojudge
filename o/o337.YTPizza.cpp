#include <iostream>
#include <set>

using namespace std;

int main() {
  // Thx!
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  set<int> m;

  int a;
  while (n--) {
    cin >> a;
    if (m.find(a) != m.end()) {
      // pass
    } else {
      cout << a << " ";
      m.insert(a);
    }
  }

  return 0;
}