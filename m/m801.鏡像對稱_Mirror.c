#include <stdio.h>
#include <string.h>

int ok(char c) {
  return strchr("AHIMOTUVWXY", c) != NULL;
}

int main() {
  char s[1001];
  scanf("%s", s);
  int n = strlen(s);
  for (int i = 0; i <= n / 2 + 1; i++) {
    if ((!ok(s[i])) || s[i] != s[n - i - 1]) {
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");

  return 0;
}
