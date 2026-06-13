#include <stdio.h>

int main() {
  char *m[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  int n;
  scanf("%d", &n);
  printf("%s\n", m[n-1]);
	return 0;
}
