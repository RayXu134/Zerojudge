#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char symbols[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};

int rome_s2n(char symbol) {
	int i = strchr(symbols, symbol) - symbols;
	int base;
	if (i % 2 == 0) {
	  base = 1;
	} else {
	  base = 5;
		i--;
	}
	i /= 2;

	int exp = 1;
	while (i--) {
	  exp *= 10;
	}
	return base * exp;
}

int parse(char *rome) {
	int result = 0;
	for (int i = 0, n = strlen(rome); i < n; i++) {
		int temp_num = rome_s2n(rome[i]);

		char temp_rome = rome[i];
		for (i++; i < n; i++) {
		  if (rome[i] == temp_rome) {
			  temp_num += rome_s2n(temp_rome);
			} else {
				if (rome_s2n(rome[i]) > rome_s2n(temp_rome)) {
					temp_num = rome_s2n(rome[i]) - temp_num;
				} else {
				  i--;
				}
				break;
			}
		}

		result += temp_num;
	}

	return result;
}

char *to_rome(int number) {
  char *s = malloc(201);
	s[0] = '\0';

	int symbol_idx = sizeof(symbols) - 1;
	while (number > 0) {
		int count = 0;
		int	symbol_value = rome_s2n(symbols[symbol_idx]);
		while (number >= symbol_value) {
		 	number -= symbol_value;
			count++;
		}

		if (count == 4) {
		  strncat(s, symbols + symbol_idx, 1);
		  strncat(s, symbols + symbol_idx + 1, 1);
		} else if (count == 9) {
		  strncat(s, symbols + symbol_idx, 1);
		  strncat(s, symbols + symbol_idx + 2, 1);
		} else {
			if (count >= 5) {
			  strncat(s, symbols + symbol_idx + 1, 1);
				count -= 5;
			}
			for (int i = 0; i < count; i++) {
				strncat(s, symbols + symbol_idx, 1);
			}
		}

		symbol_idx -= 2;
	}

	return s;
}

void run_case() {
  char rome1[101], rome2[101];
	scanf("%s", rome1);
	if (rome1[0] == '#') {
	  exit(0);
	}
	scanf("%s", rome2);
	int num1 = parse(rome1);
	int num2 = parse(rome2);
	int res = num1 > num2 ? num1 - num2 : num2 - num1;
	if (res == 0) {
	  printf("ZERO\n");
	} else {
		char *rome = to_rome(res);
		printf("%s\n", rome);
		free(rome);
	}
}

int main() {
  while (1) {
	  run_case();
	}
}
