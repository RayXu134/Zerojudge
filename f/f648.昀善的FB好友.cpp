#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
  cin.sync_with_stdio(false);
  cin.tie(NULL);

  string query[100];
  int amount = 0;
  cin.ignore(20000005, '\n');
  string name;
  while (cin >> name) {
    query[amount++] = name;
  }

  cin.clear();
  cin.rdbuf()->pubseekpos(cin.beg);

  int count[100] = {0};
  while (cin >> name) {
    for (int i = 0; i < amount; i++) {
      if (query[i] == name) {
        count[i]++;
      }
    }
    if (cin.get() == '\n') {
      break;
    }
  }

  for (int i = 0; i < amount; i++) {
    if (count[i] == 0) {
      printf("No\n");
    } else if (count[i] == 1) {
      printf("Yes\n");
    } else {
      printf("Pathetic\n");
    }
  }

  return 0;
}
