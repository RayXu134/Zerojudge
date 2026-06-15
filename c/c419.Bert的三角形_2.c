#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);

  int padding = n - 1;
  int width = 1;
  while (n--) {
    for (int i = 0; i < padding; i++) printf("_");
    for (int i = 0; i < width; i++) printf("*");
    padding--;
    width++;
    printf("\n");
  }

  return 0;
}
