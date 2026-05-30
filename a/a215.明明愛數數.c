#include <stdio.h>

int main() {
  int n, m;

  while (scanf("%d%d", &n, &m) == 2) {
    long long sum = 0;
    for (int x = 0; x < 1000000; x++) {
      sum += n + x;
      if (sum > m) {
        printf("%d\n", x + 1);
        break;
      }
    }
  }
	return 0;
}
