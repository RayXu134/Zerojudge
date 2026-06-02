#include <stdio.h>

int main() {
  int _;
  int n;
  while (scanf("%d", &n) == 1) {
    for (int i = 0; i < n; i++) {
      scanf("%d", &_);
    }
    for (int i = 0; i < n; i++) {
      printf("%d", i + 1);
      if (i + 1 < n) {
        printf(" ");
      }
    }
    printf("\n");
  }
	return 0;
}
