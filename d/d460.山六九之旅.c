#include <stdio.h>

int main() {

	int A;
	scanf("%d", &A);

	int cost = 0;
	if (A <= 5) {
	  cost = 0;
	} else if (A <= 11) {
	  cost = 590;
	} else if (A <= 17) {
	  cost = 790;
	} else if (A <= 59) {
	  cost = 890;
	} else {
	  cost = 399;
	}

	printf("%d\n", cost);
  
	return 0;
}
