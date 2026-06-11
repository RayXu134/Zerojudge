#include <stdio.h>

int main() {
  int n, s;
  scanf("%d%d", &n, &s);

  int ans[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", ans + i);
  }

  int stu;
  scanf("%d", &stu);

  int temp;
  for (int i = 0; i < stu; i++) {
    int correct = 0;
    for (int j = 0; j < n; j++) {
      scanf("%d", &temp);
      if (temp == ans[j]) {
        correct++;
      }
    }
    printf("%d\n", correct * s);
  }

  return 0;
}
