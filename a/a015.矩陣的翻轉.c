#include <stdio.h>

int main() {

	int H, W;
		
	while	(scanf("%d%d", &H, &W) == 2) {
		int a[H][W];
		for (int y = 0; y < H; y++) {
			for (int x = 0; x < W; x++) {
				scanf("%d", &(a[y][x]));
			}
		}
		
		for (int x = 0; x < W; x++) {
			for (int y = 0; y < H; y++) {
				printf("%d", a[y][x]);
				if (y + 1 < H) {
					printf(" ");
				}
			}
			printf("\n");
		}
	}

	return 0;
}
