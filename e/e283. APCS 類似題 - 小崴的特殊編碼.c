#include <stdio.h>

int run_case() {
  int n;
  if (scanf("%d", &n) != 1) return 1;

  int s[n][4];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 4; j++) {
      scanf("%d", &(s[i][j]));
    }
  }

  for (int i = 0; i < n; i++) {
    if (s[i][0] == 0) {
      switch (s[i][2]) {
        case 0:
          printf("A");
          break;
        case 1:
          printf("%c", s[i][1] == 1 ? 'B' : 'C');
          break;
      }
    } else {
      switch (s[i][3]) {
        case 1:
          printf("D");
          break;
        case 0:
          printf("%c", s[i][1] == 0 ? 'E' : 'F');
          break;
      }
    }
  }

  printf("\n");

  return 0;
}

int main() {
  while (!run_case());
	return 0;
}
