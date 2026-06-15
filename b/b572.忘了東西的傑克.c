#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  while (n--) {
    int h1, m1;
    int h2, m2;
    scanf("%d%d%d%d", &h1, &m1, &h2, &m2);
    int time;
    scanf("%d", &time);

    int available = (h2 - h1) * 60 + (m2 - m1);
    printf("%s\n", time <= available ? "Yes" : "No");
  }

  return 0;
}
