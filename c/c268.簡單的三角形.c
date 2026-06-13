#include <stdio.h>
#include <stdlib.h>

int comp(int a, int b) {
  return a - b;
}

int main() {
  int n;
  scanf("%d", &n);
  while (n--) {
    int m;
    scanf("%d", &m);
    int l[m];
    for (int i = 0; i < m; i++) {
      scanf("%d", l + i);
    }
    if (m >= 45) {
      printf("NO\n");
      continue;
    }

    qsort(l, m, sizeof(int), comp);

    for (int i = 0; i + 2 < m; i++) {

    }
  }
  return 0;
}
