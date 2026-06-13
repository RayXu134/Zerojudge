#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int d[3] = {2, 3, 5};
  for (int i = 0; i < 3; i++) {
    while (n % d[i] == 0) {
      n /= d[i];
    }
  }
  printf("%s\n", n == 1 ? "ugly" : "beautiful");
	return 0;
}
