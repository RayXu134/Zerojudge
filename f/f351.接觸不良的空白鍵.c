#include <stdio.h>

int main() {
  char str[1001];
  while (scanf("%s", str) == 1) {
    printf("%s ", str);
  }
  printf("\n");
}
