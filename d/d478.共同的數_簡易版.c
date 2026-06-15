#include <stdio.h>

int main(int argc, char *argv[]) {
  int n, m;
  scanf("%d%d", &n, &m);

  int a[m];
  while (n--) {
    int cnt = 0;
    for (int i = 0; i < m; i++) {
      scanf("%d", a + i);
    }
    int pos = 0;
    int temp;
    for (int i = 0; i < m; i++) {
      scanf("%d", &temp);
      while (pos < m && a[pos] < temp) pos++;
      if (a[pos] == temp) cnt++;
    }
    printf("%d\n", cnt);
  }

  return 0;
}
