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

long totient(long x)
{

	int count,i;
	count = 0;

	for (i=1; i < x; i+=1) {
		if (gcd(i,x) == 1)
			count += 1;
	}

	return count;
}

int main() {

	long a;

	printf("Enter a number:");
	scanf("%d", &a);
	printf("The euler totient of %d, is %d.\n",a,totient(a));

	return 0;
}
