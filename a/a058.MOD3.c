#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int temp;
  int counters[3] = {0};
  for (int i = 0; i < n; i++) {
    scanf("%d", &temp);
    counters[temp % 3]++;
  }
  printf("%d %d %d\n", counters[0], counters[1], counters[2]);

  return 0;
}
