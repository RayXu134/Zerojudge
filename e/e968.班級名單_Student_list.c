#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);

  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);

  for (int i = n; i >= 1; i--) {
    if (i == a || i == b || i == c) continue;
    printf("No. %d\n", i);
  }

  return 0;
}
