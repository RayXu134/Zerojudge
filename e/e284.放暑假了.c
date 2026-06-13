#include <stdio.h>

int main() {
  int n;
  while (scanf("%d", &n) == 1) {
    long long x = 1;
    while (x < n)
      x <<= 1;
    printf("%s\n", (x == n) ? "Yes" : "No");
  }
  return 0;
}
