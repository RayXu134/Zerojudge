#include <stdio.h>
#include <string.h>

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? (-(x)) : (x))

typedef long long ll;

int run_case() {
  char n[25];
  if (scanf("%s", n) == EOF) {
    return 1;
  }

  int len = strlen(n);
  ll num = 0;
  for (int i = 0; i < len; i++) {
    num = num * 10 + (n[i] - '0');
  }

  int first_even_idx = -1;
  for (int i = 0; i < len; i++) {
    if ((n[i] - '0') % 2 == 0) {
      first_even_idx = i;
      break;
    }
  }

  if (first_even_idx == -1) {
    printf("0\n");
    return 0;
  }

  int high[20];
  int low[20];

  // High.
  for (int i = 0; i < len; i++) {
    int x = n[i] - '0';
    if (i < first_even_idx) {
      high[i] = x;
    } else if (i == first_even_idx) {
      high[i] = x + 1;
    } else {
      high[i] = 1;
    }
  }

  // Low.
  for (int i = 0; i < len; i++) {
    int x = n[i] - '0';
    if (i < first_even_idx) {
      low[i] = x;
    } else if (i == first_even_idx) {
      if (x != 0) {
        low[i] = x - 1;
      } else {
        low[i] = 9;
        int idx = i - 1;
        while (idx >= 0) {
          if (low[idx] == 1) {
            if (idx == 0) {
              low[idx] = 0;
              break;
            } else {
              low[idx] = 9;
              idx--;
            }
          } else {
            low[idx] -= 2;
            break;
          }
        }
      }
    } else {
      low[i] = 9;
    }
  }

  long highNum = 0;
  long lowNum = 0;
  for (int i = 0; i < len; i++) {
    highNum *= 10;
    highNum += high[i];
  }
  for (int i = 0; i < len; i++) {
    lowNum *= 10;
    lowNum += low[i];
  }

  ll ans = MIN(num - lowNum, highNum - num);
  printf("%lld\n", ans);

  return 0;
}

int main() {
  while (!run_case());
  return 0;
}
