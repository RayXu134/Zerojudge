#include <stdio.h>

int main(int argc, char *argv[]) {
  int m;
  scanf("%d", &m);

  printf("%d\n", ((25 + 60) - m) % 60);

  return 0;
}
