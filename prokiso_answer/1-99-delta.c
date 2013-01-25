#include <stdio.h>

int main(int argc, char const* argv[])
{
	int a,i,j;

	scanf("%d", &a);

	//a列表示
	for (i = 1; i <= a; i++) {
		//a行表示
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
