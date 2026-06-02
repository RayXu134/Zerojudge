#include <stdio.h>

int main() {
  long long a, b;
  long long c, d;
  if (scanf("%lld%lld", &a, &c) != 2) break;
  scanf("%lld%lld", &b, &d);
  long long avg = ((a * c) + (b * d)) / (c + d);
  if (avg >= 60) {
    printf("Oh wow! You pass it!\n%lld\n", avg);
  } else {
    printf("YEEEEEE!!!\n");
  }
  return 0;
}
