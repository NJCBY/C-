#include <stdio.h>
int main(void)
{
	unsigned a, b, c, d, e, f;
	scanf("%u %u %u", &a, &b, &c);
	// a是1元个数,b是5角个数,c是1角个数

	d = a / 10;//d是10元,
	e = b / 2 + a - (a / 10) * 10 + c / 10; //e是1元,
	f = c - (c / 10) * 10 + (b - (b / 2) * 2) * 5; //f是角数
	if (f >= 10)
	{
		e += f / 10;
		f = f % 10;
	}
	if (e >= 10)
	{
		d += e / 10;
		e = e % 10;

	}
	printf("%u\n%u\n%u", d, e, f);

	return 0;
}
