#include <stdio.h>
#include <string.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    long long ans = 1;
    char num[101];
    scanf("%s", num);
    if (strlen(num) == 1 && num[0] == '0') {
      printf("0\n");
      continue;
    }

    for (int i = 0, n = strlen(num); i < n; i++) {
      ans *= num[i] - '0';
    }

    printf("%lld\n", ans);
  }
	return 0;
}
