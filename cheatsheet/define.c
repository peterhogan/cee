#include <stdio.h>

#define PI 3.1415926535
#define HALFOF(x) x/2
/* #define DEBUG 0 */

int main(int argc, char *argv[])
{
	#ifdef DEBUG
		printf("Debugging is on.\n");
	#else
		printf("Debugging is off.\n");
	#endif
	printf("pi is: %g\n", PI);
	printf("half of pi is: %g\n", HALFOF(PI));

	printf("%s\n", argv[1]);

	return 0;
}
