#include <stdio.h>

int main() {
  char d[101];
  scanf("%s", d);
  char s[100][101];
  int count = 0;
  int c;


  for (int i = 0; i < count; i++) {
    printf("%s", s[i]);
    if (i + 1 < count) {
      printf(" %s ", d);
    }
  }
	return 0;
}
