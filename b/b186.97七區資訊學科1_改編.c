#include <stdio.h>

int main() {
  int a, b, c;
  while (scanf("%d%d%d", &a, &b, &c) == 3) {

    int give = a / 10;
    if (c / 2 < give) give = c / 2;

    printf("%d 個餅乾，%d 盒巧克力，%d 個蛋糕。\n", a, b + give, c);

  }
  return 0;
}
