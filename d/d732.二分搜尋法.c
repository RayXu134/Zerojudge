#include <stdio.h>

int main(int argc, char *argv[]) {
  int n, k;
  scanf("%d%d", &n, &k);

  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", a + i);
  }

  int x;
  while (k--) {
    scanf("%d", &x);

    int low = 0, high = n - 1;
    int found = 0;
    while (low <= high) {
      int mid = low + (high - low) / 2;
      if (a[mid] > x) {
        high = mid - 1;
      } else if (a[mid] < x) {
        low = mid + 1;
      } else {
        printf("%d\n", mid+1);
        found = 1;
        break;
      }
    }
    if (!found) printf("0\n");
  }

  return 0;
}
