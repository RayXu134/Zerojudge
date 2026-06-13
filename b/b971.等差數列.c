#include <stdio.h>

int main() {
  int a1, an, d;
  scanf("%d%d%d", &a1, &an, &d);

  for (int i = 0, n = (an - a1) / d + 1; i < n; i++) {
    printf("%d", a1 + i * d);
    if (i + 1 < n) {
      printf(" ");
    }
  }
  printf("\n");

  return 0;
}
