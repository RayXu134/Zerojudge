#include <stdio.h>
#include <ctype.h>

int readint() {
  int n = 0;
  int c;
  while (c < '0' || c > '9') {
    c = getchar_unlocked();
    if (c == EOF) {
      return -1;
    }
  }
  while (c >= '0' && c <= '9') {
    n = 10 * n + (c - '0');
    c = getchar_unlocked();
  }
  return n;
}

void putint(int n) {
  char buf[20];
  int i = 0;
  while (n > 0) {
    buf[i++] = n % 10;
    n /= 10;
  }
  while (--i >= 0) {
    putchar_unlocked(buf[i]);
  }
  putchar_unlocked('\n');
}

int main() {
  int score, prop;
  long long sScore = 0;
  long long sProp = 0;
  while ((score = readint()) != -1) {
    prop = readint();
    sScore += score * prop;
    sProp += prop;
  }
  if (sScore >= 60 * sProp) {
    printf("Oh wow! You pass it!\n");
    printf("%lld\n", sScore / sProp);
  } else {
    printf("YEEEEEE!!!\n");
  }
  return 0;
}
