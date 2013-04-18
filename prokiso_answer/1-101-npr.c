#include <stdio.h>

int main(int argc, char const* argv[])
{
	int n,r;

	scanf("%d", &n);
	scanf("%d", &r);

	printf("nPr = %d\n", (n-r+1));
	return 0;
}
