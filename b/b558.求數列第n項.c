#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  while (scanf("%d", &n) == 1) {
    if (n == 1) {
      printf("1\n");
    } else {
      long long ans = 1;
      for (int i = 1; i <= n - 1; i++) {
        ans += i;
      }
      printf("%d\n", ans);
    }
  }

  return 0;
}
