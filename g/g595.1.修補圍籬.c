#include <stdio.h>

int main() {

	int N;
	scanf("%d", &N);

	int h[N];
	for (int i = 0; i < N; i++) {
	  scanf("%d", h+i);
	}

	int cost = 0;
	for (int i = 0; i < N; i++) {
	  if (h[i] == 0) {
			int min = 0;
			if (i > 0) {
				min = h[i - 1];
				if (i + 1 < N) {
					if (h[i + 1] < min) min = h[i + 1];
				}
			} else {
				if (i + 1 < N) min = h[i + 1];
			}

			cost += min;
		}
	}

	printf("%d\n", cost);
  
	return 0;
}
