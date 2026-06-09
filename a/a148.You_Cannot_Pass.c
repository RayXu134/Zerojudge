#include <stdio.h>

int main() {
  int n;
  while (scanf("%d", &n) == 1) {
    int s = 0;
    int temp;
    for (int i = 0; i < n; i++) {
      scanf("%d", &temp);
      s += temp;
    }
    printf("%s\n", (s > (59 * n)) ? "no" : "yes");
  }

  return 0;
}
