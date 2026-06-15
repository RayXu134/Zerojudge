#include <stdio.h>

int main(int argc, char *argv[]) {
  int x, y;
  scanf("%d%d", &x, &y);

  y += 30;
  x += y / 60;
  y %= 60;

  x += 2;
  x %= 24;

  printf("%02d:%02d\n", x, y);

  return 0;
}
