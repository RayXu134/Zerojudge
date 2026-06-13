#include <stdio.h>

int main() {
  int n;

  while (scanf("%d", &n) == 1) {
    long long sum_x = 0;
    long long sum_y = 0;

    long long temp;
    for (int i = 0; i < n; i++) {
      scanf("%lld", &temp);
      sum_x += temp;
      scanf("%lld", &temp);
      sum_y += temp;
    }

    long long a = sum_x / 10 + (sum_x % 10 != 0);
    long long b = sum_y / 10 + (sum_y % 10 != 0);
    printf("%lld %lld\n%lld %lld\n", a, a * 10 - sum_x, b, b * 10 - sum_y);
  }

  return 0;
}
