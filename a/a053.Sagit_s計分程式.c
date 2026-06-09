#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int score = 0;
  if (n <= 10) {
    score = n * 6;
  } else if (n <= 20) {
    score = 60 + (n - 10) * 2;
  } else if (n < 40) {
    score = 80 + (n - 20) * 1;
  } else if (n >= 40) {
    score = 100;
  }

  printf("%d\n", score);

  return 0;
}
