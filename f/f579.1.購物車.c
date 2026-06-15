#include <stdio.h>

int main(int argc, char *argv[]) {
  int a, b;
  scanf("%d%d", &a, &b);

  int n;
  scanf("%d", &n);
  int cnt = 0;
  while (n--) {
    int cnt_a = 0;
    int cnt_b = 0;


    int temp;
    while (scanf("%d", &temp) == 1) {
      if (temp == 0) break;

      if (temp == a) cnt_a++;
      if (temp == b) cnt_b++;
      if (temp == -a) cnt_a--;
      if (temp == -b) cnt_b--;
    }

    if (cnt_a > 0 && cnt_b > 0) {
      cnt++;
    }
  }

  printf("%d\n", cnt);

  return 0;
}
