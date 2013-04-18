#include <stdio.h>

int main(void) {
	int a,b,c,d,e;
	scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
	printf("GCD = %d\n",GCD(a,GCD(b,GCD(c,GCD(d,e)))));
	printf("LCM = %d\n",(a*b*c*d*e)/GCD(a,GCD(b,GCD(c,GCD(d,e)))));
	return 0;
}

int GCD(int x, int y) {
	if(x % y == 0)	return y;
	else return(y,x % y);
}

int LCM(int x, int y) {
	return (x*y)/GCD(x,y);
}
