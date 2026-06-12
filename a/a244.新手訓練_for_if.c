#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);

  unsigned long long a, b, c;
  while (n--) {
    scanf("%llu%llu%llu", &a, &b, &c);
    int sign = 0;
    unsigned long long ans;
    switch (a) {
      case 1:
        ans = b + c;
        break;
      case 2:
        if (b < c) {
          ans = c - b;
          sign = 1;
        } else {
          ans = b - c;
        }
        break;
      case 3:
        ans = b * c;
        break;
      case 4:
        ans = b / c;
        break;
    }
    if (sign) putchar('-');
    printf("%llu\n", ans);
  }

  return 0;
}
