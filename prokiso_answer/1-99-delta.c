#include <stdio.h>

int main(int argc, char const* argv[])
{
	int a,i,j;

	scanf("%d", &a);

	// a line
	for (i = 1; i <= a; i++) {
		//a column
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
