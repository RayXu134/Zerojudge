#include <iostream>

using namespace std;

int main() {
  double y;
  scanf("%lf", &y);
  int m;
  scanf("%d", &m);
  getchar();
  char c = getchar();
  double M;
  double rate;
  if (c == 'T')
    rate = 1;
  if (c == 'U')
    rate = 30.9;
  if (c == 'J')
    rate = 0.28;
  if (c == 'E')
    rate = 34.5;
  M = rate * m;

  y -= M;
  if (y >= 0) {
    double left = y / rate;
    if (left < 0.05) {
      left = 0;
    }
    printf("%c %.2lf", c, left);
  } else {
    printf("No Money\n");
  }
  return 0;
}
