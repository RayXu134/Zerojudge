#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
  int a, b;
  scanf("%d%d", &a, &b);

  int f = 0;
  for (int num = a; num <= b; num++) {
    int i = num;
    int len = 1;
    while (i >= 10) {
      len++;
      i /= 10;
    }

    long long sum = 0;
    i = num;
    while (i > 0) {
      sum += pow(i % 10, len);
      i /= 10;
    }
    if (sum == num) {
      printf("%d ", num);
      f = 1;
    }
  }
  if (!f) {
    printf("none\n");
  } else {
    printf("\n");
  }

  return 0;
}
