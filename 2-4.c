#include <stdio.h>
int main(void)
{
	unsigned a, b, c, d, e, f;
	scanf("%u %u %u", &a, &b, &c);
	// a��1Ԫ����,b��5�Ǹ���,c��1�Ǹ���

	d = a / 10;//d��10Ԫ,
	e = b / 2 + a - (a / 10) * 10 + c / 10; //e��1Ԫ,
	f = c - (c / 10) * 10 + (b - (b / 2) * 2) * 5; //f�ǽ���
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
