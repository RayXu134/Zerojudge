#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  while (scanf("%d", &n) == 1) {
    if (n == 0) {
      printf("0\n");
      continue;
    }

    int i = 0;
    while ((1 << i) <= n) i++;
    i--;

    while ((1 << i) >= 1) {
      printf("%d", (n >> i) & 1);
      i--;
    }
    printf("\n");
  }
  
  return 0;
}
