#include <stdio.h>

int gcd(long x, long y)
{
	long g;

	if (x < 0)
		x = -x;
	if (y < 0)
		y = -y;
	if (x + y == 0) {
		printf("ERROR");
		return 0;
	}
	g = y;
	while (x > 0) {
		g = x;
		x = y % x;
		y = g;
	}
	return g;
}

int main()
{
	long a,b;

	printf("Enter a number: \n");
	scanf("%d", &a);
	printf("Enter another number: \n");
	scanf("%d", &b);
	printf("The GCD of %d and %d is %d.\n", a, b, gcd(a,b));

	return 1;
}
