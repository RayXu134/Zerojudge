#include <stdio.h>

int eat(int n, int m) {
  if (m == 0) return 0;
  return n % m;
}

int main(int argc, char *argv[]) {
  int a[5];
  for (int i = 0; i < 5; i++) {
    scanf("%d", a + i);
  }
  int temp;
  long long ans = 0;
  for (int i = 0; i < 5; i++) {
    scanf("%d", &temp);
    ans += eat(a[i], temp);
  }

  printf("%lld\n", ans);

  return 0;
}
