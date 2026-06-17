#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int n, m;
  while (scanf("%d%d", &n, &m) == 2) {
    if (n == 0 && m == 0) break;
    char *buf = malloc(n * 100 + 1);

    int pos = 0;

    for (int i = 0; i < n; i++) {
      scanf("%s", buf + pos);

      while (buf[pos] != '\0') pos++;
    }

    int idx;
    while (m--) {
      scanf("%d", &idx);
      printf("%c", buf[idx-1]);
    }
    printf("\n");

    free(buf);
  }

  return 0;
}
