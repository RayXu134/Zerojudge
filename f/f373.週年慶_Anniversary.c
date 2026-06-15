#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  if (n / 2000 * 2 >= n / 1000) {
    printf("%d 0\n", n - (n / 2000 * 200));
  } else {
    printf("%d 1\n", n - (n / 1000 * 100));
  }

  return 0;
}
