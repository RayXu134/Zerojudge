#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  if (n == 0) {
    printf("0\n");
  } else {
    printf("%d\n", n > 0 ? 1 : -1);
  }
  return 0;
}
