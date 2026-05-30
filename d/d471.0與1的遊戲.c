#include <stdio.h>

int main() {
  int n;
  while (scanf("%d", &n) == 1) {
    long long x = 0;
    long long limit = (1LL << n) - 1;
    while (x <= limit) {
      for (int i = n-1; i >= 0; i--) {
        printf("%lld", (x >> i) & 1);
      }
      printf("\n");
      x++;
    }
  }
	return 0;
}
