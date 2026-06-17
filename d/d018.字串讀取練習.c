#include <stdio.h>
#include <stdbool.h>

#define BUF_SIZE 5000000

int main(int argc, char *argv[]) {
  double temp;
  int idx;
  double total = 0;
  while (scanf("%d:%lf", &idx, &temp) == 2) {
    if (idx & 1) {
      total += temp;
    } else {
      total -= temp;
    }

    int next_char = getchar();

    if (next_char == '\n' || next_char == EOF) {
      printf("%lg\n", total);
      total = 0;
    }
  }

  return 0;
}
