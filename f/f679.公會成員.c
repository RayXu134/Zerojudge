#include <stdio.h>

int main() {
  int n, q;
  scanf("%d%d", &n, &q);
  int a[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", a + i);
  }
  for (int i = 0; i < q; i++) {
    int x;
    scanf("%d", &x);
    int beg = 0;
    int end = n - 1;
    int found = 0;
    while (beg <= end) {
      int mid = beg + (end - beg) / 2;
      if (a[mid] == x) {
        found = 1;
        break;
      } else if (a[mid] < x) {
        beg = mid + 1;
      } else {
        end = mid - 1;
      }
    }
    if (found) {
      printf("Yes\n");
    } else {
      printf("No\n");
    }
  }
	return 0;
}
