#include <stdio.h>
#include <stdbool.h>

typedef unsigned long long num;

bool check(long long n) {
	num low = 1;
	num high = 1000000000ULL;
	num mid;
	num val;

	while (low <= high) {
		mid = low + (high - low) / 2;

		val = (1 + mid) * mid / 2;

		if (val == n) {
		  return 1;
		} else if (val < n) {
		  low = mid + 1;
		} else if (val > n) {
		  high = mid - 1;
		}
	}

	return 0;
}

void run_case() {
  num N;
	scanf("%llu", &N);

	printf("%s\n", check(N) ? "TAK" : "NIE");
}

int main() {

	int T;
	scanf("%d", &T);
	while (T--) {
	  run_case();
	}
  
	return 0;
}
