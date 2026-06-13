#include <stdio.h>

int main() {
  char day[101];
  scanf("%s", day);
  char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
  for (int i = 0; i < 7; i++) {
    if (strcmp(day, days[i]) == 0) {
      printf("%d\n", i);
      return 0;
    }
  }
  printf("error\n");
	return 0;
}
