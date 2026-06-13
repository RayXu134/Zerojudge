#include <stdio.h>

int main() {
  long long a, b, c;
  while (scanf("%lld%lld%lld", &a, &b, &c) == 3) {
    if (a > b && a > c) {
      if (a > b + c) {
        printf("A\n");
      } else {
        if (b > c) {
          printf("B\n");
        } else {
          printf("C\n");
        }
      }
    } else if (b > a && b > c) {
      if (b > a + c) {
        printf("B\n");
      } else {
        if (a > c) {
          printf("A\n");
        } else {
          printf("C\n");
        }
      }
    } else {
      if (c > a + b) {
        printf("C\n");
      } else {
        if (b > a) {
          printf("B\n");
        } else {
          printf("A\n");
        }
      }
    }
  }

  return 0;
}
