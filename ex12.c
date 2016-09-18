#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	if(argc == 1) {
		printf("No arguments given..\n");
	} else if(argc == 2) {
		printf("You only have one argument - %s.\n", argv[1]);
	} else if(argc > 2 && argc < 4) {
		printf("Here are your arguments:\n");

		for(i = 0; i <argc; i++) {
			printf("%s ", argv[i]);
		}
		printf("\n");
	} else {
		printf("Too many arguments.\n");
	}

	return 0;
}
