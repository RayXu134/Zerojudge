#include <stdio.h>

int main() {
  int n;
	scanf("%d", &n);
	int h[n];
	int w[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", h+i);
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", w+i);
	}
	int minh = h[0];
	int minw = w[0];
	for (int i = 1; i < n; i++) {
	  if (h[i] * w[i] < minh * minw) {
		  minh = h[i];
		  minw = w[i];
		}
	}
	printf("%d %d\n", minh, minw);
	return 0;
}
