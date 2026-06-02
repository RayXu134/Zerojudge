#include <stdio.h>

int main() {
  int a;
  int b;
  scanf("%d%d", &a, &b);
  int c = a - b;
  if (b > c) {
    int temp = b;
    b = c;
    c = temp;
  }
  printf("%d+%d=%d\n", b, c, a);
	return 0;
}
