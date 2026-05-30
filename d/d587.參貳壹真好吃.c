#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int count[3] = {0};
  int i;
  while (i < n) {
    int c = getchar();
    if (c == '1' || c == '2' || c == '3') {
      count[c - '1']++;
      i++;
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < count[i]; j++) {
      printf("%d", i + 1);
      if (j + 1 < count[i]) {
        printf(" ");
      } else if (i == 0 && (count[1] != 0 || count[2] != 0)) {
        printf(" ");
      } else if (i == 1 && count[2] != 0) {
        printf(" ");
      }
    }
  }

  printf("\n");

  return 0;
}
