#include <stdio.h>
#include <math.h>

int main() {

	int A, B, C;
	scanf("%d%d%d", &A, &B, &C);

	int d = B * B - 4 * A * C;
	if (d < 0) {
	  printf("No real root\n");
	} else {
		int x1 = ((-B) + sqrt(d)) / (2 * A);
		int x2 = ((-B) - sqrt(d)) / (2 * A);
		if (d == 0) {
			printf("Two same roots x=%d\n", x1);
		} else {
			printf("Two different roots x1=%d , x2=%d\n", x1, x2);
		}
	}

	return 0;
}
