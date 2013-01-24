#include <stdio.h>

main()
{
	int a=6, b=3;

	a += b;
	printf("kekka1 = %d \n", a);
	a -= b;
	printf("kekka2 = %d \n", a);
	a *= b;
	printf("kekka3 = %d \n", a);
	a /= b;
	printf("kekka4 = %d \n", a);
	a %= b;
	printf("kekka5 = %d \n", a);
}

/*
	kekka1 = 9 
	kekka2 = 6 
	kekka3 = 18 
	kekka4 = 6 
	kekka5 = 0 
*/
