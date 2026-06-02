#include <stdio.h>

int main() {
  int n;
  while (1) {
    scanf("%d", &n);
    if (n == 0) break;
    if (!(n & 1)) {
      printf("0\n");
      continue;
    }

    long long i = 1;
    int count = 0;
    for (int i = 0; (1 << i) <= n; i++) {
      if (!(n >> i & 1)) break;
      count += (n >> i) & 1;
    }
    printf("%d\n", count);
  }
  return 0;
}
