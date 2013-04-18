#include <stdio.h>

int main(int argc, char const* argv[])
{
	int n,r,i,j,upper,downer;

	upper = 1;
	downer = 1;

	scanf("%d", &n);
	scanf("%d", &r);

	// nPr
	for (i = 0; i < r; i++) {
		upper *= (n - i);
	}

	// r!
	for (j = 1; j <= r; j++) {
		downer *= j;
	}

	printf("upper = %d\n", upper);
	printf("downer = %d\n", downer);
	printf("%d\n", upper/downer);

	return 0;
}
