#include <stdio.h>

unsigned long qe2(unsigned long x, unsigned long y, unsigned long n) {
	unsigned long s,t,u;
	int i;

	s = 1; t = x; u = y;

	while(u) {
		if(u&1) s = (s*t)%n;
		u>>=1;
		t = (t*t)%n;
	}
	return(s);
}

int main() {
	int a;
	int b;
	int c;

	while(1) {

		printf("Enter a number to multiply: \n");
		scanf("%d", &a);
		printf("Enter another number to multiply: \n");
		scanf("%d", &b);
		printf("Enter a modulus: \n");
		scanf("%d", &c);

		printf("The answer is: %d\n", qe2(a,b,c));
	}

	return 0;
}
