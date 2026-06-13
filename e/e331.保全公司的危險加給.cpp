#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    int n, l, u, k;
    scanf("%d%d%d%d", &n, &l, &u, &k);

    vector<int> x(n, 0);
    vector<int> y(n, 0);
    for (int i = 0; i < n; i++) {
      cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> y[i];
    }

    vector<vector<bool>> f(n, vector<bool>(n, false)>);

    for (int i = 0; i < k; i++) {
      int fi, fj;
      cin >> fi >> fj;
      f[fi-1][fj-1] = true;
    }

    vector<vector<int>> cost;
    for (int i = 0; i < n; i++) {
      cost.push_back(vector<int>());
      for (int j = 0; j < n; j++) {
        if (f[i][j]) {
          cost[i].push_back(1e9 + 5);
          continue;
        }

        int danger_value = x[i] + y[j];
        int c;
        if (danger_value < l) {
          c = 0;
        } else if (l <= danger_value && danger_value <= u) {
          c = danger_value - l;
        } else {
          c = u - l;
        }

        cost[i].push_back(c);
      }
    }
  }

  return 0;
}
