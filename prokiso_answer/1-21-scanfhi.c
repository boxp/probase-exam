#include <stdio.h>

int main(int argc, char const* argv[])
{
	int h,i;

	printf("変数hの値を入力\n");
	scanf("%d",&h);
	printf("変数iの値を入力\n");
	scanf("%d",&i);

	printf("h,i = %d,%d\n",h,i);
	printf("i,h = %d,%d\n",i,h);
	return 0;
}
