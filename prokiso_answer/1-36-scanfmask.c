#include <stdio.h>

int main(int argc, char const* argv[])
{
	int a;

	scanf("%d", &a);

	printf("n** = %d\n", a/100);
	printf("*n* = %d\n", a%100/10);
	printf("**n = %d\n", a%10);
	return 0;
}
