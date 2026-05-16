#include <stdio.h>
#include <stdlib.h>

int main() {

	int K = -7;

	int size = 100;
	int count = 0;
	char *s = malloc(size);

	char c;
	while ((c = getchar()) != '\n') {
	  s[count++] = c + K;
		if (count > size) {
		  size *= 2;
			s = realloc(s, size);
		}
	}
	s[count++] = '\0';

	printf("%s", s);

	return 0;
}
