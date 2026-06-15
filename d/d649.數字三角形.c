#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  while (scanf("%d", &n) == 1 && n != 0) {
    int padd = n - 1;
    int w = 1;
    while (n--) {
      for (int i = 0; i < padd; i++) printf("_");
      for (int i = 0; i < w; i++) printf("+");
      printf("\n");
      padd--;
      w++;
    }
    printf("\n\n");
  }

  return 0;
}
