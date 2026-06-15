#include <stdio.h>
#include <stdlib.h>

int m;

int cmp(const void *a, const void *b) {
  int *s = a;
  int *t = b;
  for (int i = 0; i < m; i++) {
    if (s[i] != t[i]) return s[i] - t[i];
  }
  return 0;
}

int main() {
  int n;
  scanf("%d%d", &n, &m);
  int arr[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &arr[i][j]);
    }
  }
  qsort(arr, n, sizeof(arr[0]), cmp);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d", arr[i][j]);
      if (j < m - 1) {
        printf(" ");
      }
    }
    printf("\n");
  }

  return 0;
}
