#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);

	while (T--) {
	  int a[4];
		for (int i = 0; i < 4; i++) {
		  scanf("%d", a+i);
		}

		int result;
		if (a[1] - a[0] == a[2] - a[1]) {
		  // 等差
			result = a[3] + (a[1] - a[0]);
		} else {
		  // 等比
			result = a[3] * (a[1] / a[0]);
		}

		for (int i = 0; i < 4; i++) {
		  printf("%d ", a[i]);
		}
		printf("%d\n", result);
	}

	return 0;
}
