#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", arr+i);
  }
  long long x = 0;
  for (int i = 0; i < n; i++) {
    x += arr[i];
    printf("%lld", x);
    if (i + 1 < n) {
      printf(" ");
    }
  }
  printf("\n");
	return 0;
}
