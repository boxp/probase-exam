#include <stdio.h>

int main(int argc, char const* argv[])
{
	int x,y;
	printf("xを入力して下さい\n");
	scanf("%d",&x);
	printf("yを入力して下さい\n");
	scanf("%d",&y);

	printf("点(x,0)と(0,y)の距離の二乗は(%d,%d)です。\n",(x-0)*(x-0),(y-0)*(y-0));
	return 0;
}
