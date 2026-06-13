#include <stdio.h>

int main() {
  int grades[6];
  for (int i = 0; i < 6; i++) {
    scanf("%d", grades + i);
  }

  int temp;
  for (int i = 0; i < 6; i++) {
    if (grades[i] == 0) {
      printf("X\n");
      for (int j = 0; j < 5; j++) scanf("%d", &temp);
      continue;
    }

    int level[5];
    for (int j = 0; j < 5; j++) {
      scanf("%d", level + j);
    }

    if (grades[i] < level[4]) {
      printf("F\n");
      continue;
    }

    int l = 4;
    for (int j = 0; j < 5; j++) {
      if (grades[i] >= level[j]) {
        l = j;
        break;
      }
    }
    printf("%c\n", 'A' + l);
  }

  return 0;
}
