#include <stdio.h>

int main() {
  long long a, b;
  scanf("%lld%lld", &a, &b);
  if (b == 0) {
    printf("OK!\n");
    return 0;
  }
  if (a % b == 0) {
    printf("OK!");
  } else {
    printf("%lld\n", a % b);
  }
	return 0;
}
