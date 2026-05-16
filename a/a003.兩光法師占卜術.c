#include <stdio.h>

int main() {

	int M, D;
	scanf("%d%d", &M, &D);

	int S = (M*2+D)%3;
	char *outputs[] = {"普通", "吉", "大吉"};
	printf("%s\n", outputs[S]);
  
	return 0;
}
