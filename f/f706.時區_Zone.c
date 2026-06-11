z#include <stdio.h>

int main() {
  // 讀取輸入
  int h, m, s;
  scanf("%d%d%d", &h, &m, &s);

  int off;
  scanf("%d", &off);

  // 依照移動的時區數量計算時間
  // 注意：這裡算出的 h 和 m 有可能會超過範圍（太大或太小），還需要處理
  h += off;
  m += off * 30;

  // 處理分鐘 m
  if (m >= 60) {
    // 分鐘進位到小時，分鐘太大就送一些給小時
    h += m / 60;
    m %= 60;
  } else {
    while (m < 0) {
      // 從小時退位給分鐘，分鐘太小就借小時來補
      h--;
      m += 60;
    }
  }

  // 處理小時 h
  while (h < 0) h += 36;
  while (h > 36) h -= 36;

  // YES!
  printf("%d:%02d:%02d\n", h, m, s);

  return 0;
}
