#include <stdio.h>
#include <math.h>

int main(int argc, char const* argv[])
{
	int x,dx,i,s,start,end;

	dx = 0.0001;
	s = 0;

	printf("start:");
	scanf("%d", &start);
	printf("end:");
	scanf("%d", &end);


	for (x = start; x < end; x = x + dx) {
		s += x*sin(x);
	}

	printf("%d\n", s);

	return 0;
}
