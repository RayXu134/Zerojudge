#include <stdio.h>

int main(int argc, char *argv[]) {
  int y;
  scanf("%d", &y);
  printf("%s\n", (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? "a leap year" : "a normal year");

  return 0;
}
