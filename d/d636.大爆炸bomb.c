#include <stdio.h>

int main() {
  int a, b;
  int magic = 10007;
	scanf("%d%d", &a, &b);
  if (a % magic == 0) {
    printf("0\n");
    return 0;
  }
  int remainder = b % magic;
  long long result = 1;
  for (int i = 0; i < remainder; i++) {
    result *= a;
  }
  printf("%lld\n", result % magic);
  return 0;
}
