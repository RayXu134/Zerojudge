#include <stdio.h>

int main() {
  char nums[10];
  scanf("%s", nums);

  int total = 0;
  for (int i = 0; i < 8; i++) {
    total += (nums[i] - '0') * (8 - i);
  }
  total += nums[8] - '0';

  int c = 10 - (total % 10);
  switch (c) {
    case 1:
      printf("AMW\n");
      break;
    case 2:
      printf("KLY\n");
      break;
    case 3:
      printf("JVX\n");
      break;
    case 4:
      printf("HU\n");
      break;
    case 5:
      printf("GT\n");
      break;
    case 6:
      printf("FS\n");
      break;
    case 7:
      printf("ER\n");
      break;
    case 8:
      printf("DOQ\n");
      break;
    case 9:
      printf("CIP\n");
      break;
    case 10:
      printf("BNZ\n");
      break;
  }

  return 0;
}
