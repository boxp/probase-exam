#include <stdio.h>

int main(int argc, char const* argv[])
{
	int a,b;

	scanf("%d",&a);
	scanf("%d",&b);

	printf("%d / %d = %d reminder %d\n",a,b,a/b,a%b);
	return 0;
}
