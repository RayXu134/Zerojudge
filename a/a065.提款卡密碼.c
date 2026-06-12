#include <stdio.h>

#define DIST(a, b) ((a > b) ? (a - b) : (b - a))

int main(int argc, char *argv[]) {
  char s[10];
  scanf("%s", &s);
  for (int i = 0; i < 6; i++) {
    printf("%d", DIST(s[i], s[i + 1]));
  }
  printf("\n");

  return 0;
}
