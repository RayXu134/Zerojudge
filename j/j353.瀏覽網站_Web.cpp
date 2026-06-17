#include <iostream>
#include <unordered_map>

using namespace std;

int main(int argc, char *argv[]) {
  int x, y;
  unordered_map<int, int> count;
  while (cin >> x >> y) {
    if (x == -1 && y == -1) break;
    if (x == 0) {
      count[y] = 0;
    } else {
      if (count.find(y) != count.end()) {
        count[y]++;
      } else {
        count[y] = 1;
      }
    }
  }

  int ans = 0;
  for (const auto &[i, v] : count) {
    ans += v;
  }
  printf("%d\n", ans);

  return 0;
}
