#include <stdio.h>

#define DIST(a, b) ((a) > (b) ? (a) - (b) : (b) - (a))

int is_leap_year(int year) {
  return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

int days_in_month(int m, int y) {
  int month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (m == 2 && is_leap_year(y)) {
    return month[m] + 1;
  } else {
    return month[m];
  }
}

long long date_to_days(int y, int m, int d) {
  long long days = 0;
  for (int i = 1; i < y; i++) {
    days += is_leap_year(i) ? 366 : 365;
  }

  for (int i = 1; i < m; i++) {
    days += days_in_month(i, y);
  }

  days += d;
  return days;
}

int main(int argc, char *argv[]) {
  int y1, m1, d1, y2, m2, d2;
  while (scanf("%d%d%d%d%d%d", &y1, &m1, &d1, &y2, &m2, &d2) == 6) {
    long long days1 = date_to_days(y1, m1, d1);
    long long days2 = date_to_days(y2, m2, d2);
    printf("%lld\n", DIST(days1, days2));
  }
  return 0;
}
