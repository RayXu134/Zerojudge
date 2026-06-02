#include <stdio.h>

int main() {
  int n, m;
  while (scanf("%d%d", &n, &m) == 2) {
    int food[n];
    int sum[n];
    for (int i = 0; i < n; i++) {
      scanf("%d", food + i);
      sum[i + 1] = sum[i] + food[i];
    }
    for (int i = 0; i < m; i++) {
      int l, r;
      scanf("%d%d", &l, &r);
      printf("%d\n", sum[r] - sum[l - 1]);
    }
  }
  return 0;
}
