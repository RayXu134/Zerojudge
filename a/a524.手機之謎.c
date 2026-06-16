#include <stdio.h>
#include <stdbool.h>

int n;
bool used[10];
int path[10];

void backtrack(int index) {
  if (index == n) {
    for (int i = 0; i < n; i++) {
      printf("%d", path[i]);
    }
    printf("\n");
    return;
  }
  for (int i = n; i >= 1; i--) {
    if (!used[i]) {
      path[index] = i;
      used[i] = true;
      backtrack(index + 1);
      used[i] = false;
    }
  }
}

int main(int argc, char *argv[]) {
  while (scanf("%d", &n) == 1) {
    for (int i = 0; i < 10; i++) used[i] = false;
    backtrack(0);
  }

  return 0;
}
