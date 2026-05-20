#include <stdio.h>

int main() {
	int N;
	while (scanf("%d", &N) == 1) {
		for (int i = 1; i < N; i++) {
			if (i % 7 != 0) {
				printf("%d", i);
				if (i+1 != N) {
					printf(" ");
				}
			}
		}
		printf("\n");
	}
  
	return 0;
}
