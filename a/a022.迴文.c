#include <stdio.h>
#include <string.h>

int main() {
	char s[1001];
	scanf("%s", s);

	for (int i = 0; i < strlen(s)/2; i++) {
	  if (s[i] != s[strlen(s) - i - 1]) {
			printf("no\n");
			return 0;
		}
	}
	printf("yes\n");

	return 0;
}
