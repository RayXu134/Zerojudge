#include <stdio.h>

int main(int argc, char *argv[]) {
  int a, s;
  scanf("%d%d", &a, &s);

  printf("%d\n", (s + a - 1) / a);

  return 0;
}
