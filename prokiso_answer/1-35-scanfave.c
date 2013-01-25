#include <stdio.h>
#include <math.h>

int main(int argc, char const* argv[])
{
	float a,b;

	scanf("%f", &a);
	scanf("%f", &b);

	printf("sumave = %f\nmultiave = %f\n",(a+b)/2,sqrt(a*b));
	return 0;
}
