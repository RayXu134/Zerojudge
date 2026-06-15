#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int *items;
  int count;
  int capacity;
} Stack;

int main(int argc, char *argv[]) {
  Stack s;
  s.count = 0;
  s.items = malloc(sizeof(int) * 100000);

  int n;
  scanf("%d", &n);
  while (n--) {
    int k;
    int temp;
    scanf("%d", &k);
    if (k == 1) {
      scanf("%d", &temp);
      s.items[s.count++] = temp;
    } else if (k == 2) {
      if (s.count <= 0) {
        printf("-1\n");
      } else {
        printf("%d\n", s.items[s.count - 1]);
      }
    } else if (k == 3) {
      if (s.count > 0) s.count--;
    }
  }

  return 0;
}
