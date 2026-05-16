#include <stdio.h>

int main() {

	int stat;
	int year;
	while ((stat = scanf("%d", &year)) == 1) {
	  printf("%s\n", ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? "閏年" : "平年");
	}
  
	return 0;
}
