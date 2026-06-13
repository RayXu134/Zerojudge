#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);

  int price;
  if (3 * t < 299) {
    price = 3 * t;
  } else if (t <= 300 && t * 3 >= 299) {
    price = 299;
  } else if (t <= 750 && 299 + (t - 300) * 3 < 699) {
    price = 299 + (t - 300) * 3;
  } else if (t <= 750) {
    price = 699;
  } else {
    price = 699 + (t - 750) * 3;
  }

  printf("%d\n", price);

  return 0;
}
