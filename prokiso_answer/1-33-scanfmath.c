#include <stdio.h>
#include <math.h>

int main(int argc, char const* argv[])
{
	float s;

	scanf("%f", &s);
	
	printf("pow = %f\nsqrt = %f\nlog = %f\nlog10 = %f\n",pow(s,2),sqrt(s),log(s),log10(s));
	return 0;
}
