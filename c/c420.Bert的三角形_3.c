#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);

  // 空白（_）的數量
  int padding = n - 1;
  // 金字塔的寬度（*的數量）
  int width = 1;
  for (int i = 0; i < n; i++) {
    // 依照 padding 和 width 輸出等量的符號
    for (int i = 0; i < padding; i++) printf("_");
    for (int i = 0; i < width; i++) printf("*");
    for (int i = 0; i < padding; i++) printf("_");
    // 不要忘記換行
    printf("\n");
    // 觀察輸出可以發現這個規律
    width += 2;
    padding -= 1;
  }

  return 0;
}
