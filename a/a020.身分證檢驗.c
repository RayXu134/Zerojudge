#include <stdio.h>

int main() {
  int total = 0;

  int code = 0;

  char temp;
  scanf("%c", &temp);
  int c = temp;
  if ('A' <= c && c <= 'H') {
    code = c - 'A' + 10;
  } else if (c == 'I') {
    code = 34;
  } else if ('J' <= c && c <= 'N') {
    code = c - 'J' + 18;
  } else if (c == 'O') {
    code = 35;
  } else if ('P' <= c && c <= 'V') {
    code = c - 'P' + 23;
  } else if (c == 'W') {
    code = 32;
  } else if ('X' <= c && c <= 'Y') {
    code = c - 'X' + 30;
  } else if (c == 'Z') {
    code = 33;
  }

  total += (code / 10) + (code % 10) * 9;

  for (int i = 0; i < 8; i++) {
    scanf("%c", &temp);
    total += (temp - '0') * (8 - i);
  }

  scanf("%c", &temp);
  total += temp - '0';

  printf("%s\n", total % 10 == 0 ? "real" : "fake");
  return 0;
}
