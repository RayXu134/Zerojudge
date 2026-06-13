#include <stdio.h>

int main() {
  long long n;
  while (scanf("%lld", &n) == 1) {
    printf("%s\n", n % 3 == 0 ? "YES" : "NO");
  }
  /* while (1) { */
  /*   int c; */
  /*   while (1) { */
  /*     int sum = 0; */
  /*     while (1) { */
  /*       c = getchar(); */
  /*       if (c == EOF) { */
  /*         break; */
  /*       } */
  /*       if (c == '\n') { */
  /*         if (sum % 3 == 0) { */
  /*           printf("YES\n"); */
  /*         } else { */
  /*           printf("NO\n"); */
  /*         } */
  /*         break; */
  /*       } */
  /*       sum += c - '0'; */
  /*     } */
  /*     if (c == EOF) { */
  /*       break; */
  /*     } */
  /*   } */
  /* } */
}
