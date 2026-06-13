#include <stdio.h>
#include <string.h>

int main() {
  char s[1001];
  scanf("%s", s);
  printf("%c", s[0]);
  for (int i = 0; i < strlen(s) - 2; i++) {
    printf("_");
  }
  printf("%c\n", s[strlen(s) - 1]);
	return 0;
}
