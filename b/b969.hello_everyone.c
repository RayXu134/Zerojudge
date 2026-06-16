#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char buf[1001];
  fgets(buf, 1000, stdin);
  buf[strcspn(buf, "\n")] = '\0';

  char word[101];
  fgets(word, 100, stdin);
  word[strcspn(word, "\n")] = '\0';

  char *ptr = buf;

  int offset = 0;
  char name[101];
  while (sscanf(ptr, "%s%n", name, &offset) == 1) {
    printf("%s, %s\n", word, name);
    ptr += offset;
  }

  return 0;
}
