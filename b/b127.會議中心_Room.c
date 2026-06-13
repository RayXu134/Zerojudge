#include <stdio.h>

int main() {
  int n;
  while (scanf("%d", &n) == 1) {
    int a = 1, b = 1;
    for (int i = 1; i < n; i++) {
      int temp = b;
      b += a;
      a = temp;
    }
    printf("%d\n", b);
  }
  return 0;
}
