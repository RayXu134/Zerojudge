#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  long long a = 0, b = 1;
  for (int i = 0; i < n-1; i++) {
    long long temp = b;
    b += a;
    a = temp;
  }
  printf("%lld\n", a);
	return 0;
}
