#include <stdio.h>

int main(int argc, char const* argv[])
{
	int a,b;

	scanf("%d", &a);
	scanf("%d", &b);

	printf("sum = %d\n", a + b);
	printf("dif = %d\n", a - b);
	printf("multi = %d\n", a * b);
	printf("div = %d\n", a / b);
	printf("surplus= %d\n", a % b);
	return 0;
}
