#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int a[7];
		int b[7];
		for (int i = 0; i < 7; i++) {
		  scanf("%d", a + i);
		}
		for (int i = 0; i < 7; i++) {
		  scanf("%d", b + i);
		}

		int ok = 1;
		if (!((a[1] != a[3] && a[1] == a[5]) && (b[1] != b[3] && b[1] == b[5]))) {
		  ok = 0;
			printf("A");
		}
		if (!(a[6] == 1 && b[6] == 0)) {
		  ok = 0;
			printf("B");
		}
		if (!(a[1] != b[1] && a[3] != b[3] && a[5] != b[5])) {
		  ok = 0;
			printf("C");
		}

		if (ok) {
		  printf("None");
		}
		printf("\n");
	}
  
	return 0;
}
