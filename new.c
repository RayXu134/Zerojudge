#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void usage(char *program) {
	printf("Usage: %s [Question name]...", program);
  exit(1);
}

int main(int argc, char *argv[]) {
	if (argc <= 1) {
		usage(argv[0]);
	}

	int question_count = 0;
	int question_size = 100;
	char *question = malloc(question_size);
	if (!question) return 1;
	void question_append(char *s, int count) {
	 	while(question_count + count > question_size) {
		  question_size *= 2;
		}
		char *temp = realloc(question, question_size);
		if (!temp) {
		  perror("realloc");
			exit(1);
		}
		question = temp;
		strcat(question, s);
	}

	for (int i = 1; i < argc; i++) {
	  question_append(argv[i], strlen(argv[i]));
	}
	question_append(".c", 2);

	printf("Create %s ? (y/n)", question);
	char option = getchar();
	if (option == 'y') {
		char *prefix = "cp /home/pay/Documents/Zerojudge/template.c \"";
		question_append("\0", 1);
		char *command = malloc(question_count + sizeof(prefix) + 1);
		if (!command) return 1;

		strcpy(command, prefix);
		strcat(command, question);
		strcat(command, "\"");
		int status = system(command);
		
		if (status != 0) {
		  perror("system");
			return 1;
		}
	} else {
	  printf("Not creating the file\n");
	}

	return 0;
}
