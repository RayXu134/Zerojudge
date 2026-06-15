#include <stdio.h>

int main(int argc, char *argv[]) {
  char name[1001];
  // 用 fgets 比較不會遇到輸入有空白的問題
  fgets(name, 1000, stdin);
  // 輸出
  printf("Hey %s", name);

  return 0;
}
