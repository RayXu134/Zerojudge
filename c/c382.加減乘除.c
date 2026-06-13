#include <stdio.h>

int main() {
  long long a, b;
  char op;
  long long ans;
  scanf("%lld%c%lld", &a, &op, &b);

  switch (op) {
    case '+':
    ans = a + b;
    break;
    case '-':
    ans = a - b;
    break;
    case '*':
    ans = a * b;
    break;
    case '/':
    ans = a / b;
    break;
  }

  printf("%lld\n", ans);
	return 0;
}
