#include <stdio.h>
#include <string.h>

int main() {
  char num[101];
  scanf("%s", num);

  int start = strlen(num) - 1;
  while (num[start] == '0' && start > 0) start--;
  for (int i = start; i >= 0; i--) {
    printf("%c", num[i]);
  }
  printf("\n");

  return 0;
}
