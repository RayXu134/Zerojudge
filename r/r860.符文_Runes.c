#include <stdio.h>

int main() {
  int n, m;
  scanf("%d%d", &n, &m);
  int a[n];
  int b[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", a + i);
  }
  for (int i = 0; i < m; i++) {
    scanf("%d", b + i);
  }
  for (int i = 0; i < n; i++) {
    int found = 1;
    for (int j = 0; j < m; j++) {
      if (a[i+j] != b[j]) {
        found = 0;
        break;
      }
    }
    if (found) {
      printf("%d\n", i + 1);
      return 0;
    }
  }
  printf("not found\n");
	return 0;
}
