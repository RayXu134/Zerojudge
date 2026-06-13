#include <stdio.h>

int main() {
  int l, w, h;
  int k;
  scanf("%d%d%d%d", &l, &w, &h, &k);

  if (!(l % k || w % k || h % k)) {
    // All Divisible.
    printf("%d\n", (l / k) * (w / k) * (h / k));
  } else {
    printf("0\n");
  }

  return 0;
}
