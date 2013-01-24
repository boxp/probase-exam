#include <stdio.h>
int main()
{
	int a=3, b=5, c, d;

	c = a++;
	c += 2;
	d = b == c;
	printf("%d / %d / %d / %d", a, b, c, d );	
}
// 4 / 5 / 5 / 1
// ４つ目の1はb == cの論理演算の結果である。
