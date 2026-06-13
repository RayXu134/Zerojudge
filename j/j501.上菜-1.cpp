#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>

using namespace std;

typedef struct {
  int dish;
  int idx;
} Customer;

int run_case() {
  int n;
  if (!(cin >> n)) return 1;

  vector<int> c;
  unordered_map<int, queue<int>> d;
  for (int i = 0; i < n; i++) {
    int serve;
    cin >> serve;
    c.push_back(serve);

    int dish;
    cin >> dish;
    d[dish].push(i + 1);
  }

  vector<int> order;
  for (int i = 0; i < n; i++) {
    order.push_back(d[c[i]].front());
    d[c[i]].pop();
  }

  for (int i = 0; i < n; i++) {
    printf("%d", order[i]);
    if (i + 1 < n) {
      printf(" ");
    }
  }
  printf("\n");

  return 0;
}

int main() {
  while (!run_case());
  return 0;
}
