#include <stdio.h>

int main(int argc, char *argv[])
{
	// go through each string in argv
	
	int i = 1;
	while(i < argc) {
		printf("arg %d: %s\n", i, argv[i]);
		i++;
	}

	//lets make an array of strings:
	char *fruits[] = {
		"Apple", "Pear",
		"Orange", "Banana",
		"Kumkwat"
	};

	int num_fruits = 5;
	i = 0; // watch here
	while(i < num_fruits) {
		printf("fruit %d: %s\n", i, fruits[i]);
		i++;
	}

	return 0;
}
