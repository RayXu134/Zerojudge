#include <stdio.h>

int main() {
  double v, r;
  while (scanf("%lf", &v) == 1) {
    scanf("%lf", &r);
    printf("%.4lf\n", v / r * 1000);
  }
	return 0;
}
