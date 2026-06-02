#include <stdio.h>

int main() {
  int x;
  while (scanf("%d", &x) == 1) {
    printf("'C' can use printf(\"%%d\",n); to show integer like %d\n", x);
  }
	return 0;
}
