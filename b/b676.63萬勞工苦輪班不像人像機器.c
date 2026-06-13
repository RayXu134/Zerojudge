#include <stdio.h>

int main() {
  int x;
  char names[] = "UGYTI";
  while (scanf("%d", &x) == 1) {
    printf("%c\n", names[x % 5]);
  }
  return 0;
}
