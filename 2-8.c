#include <stdio.h>
int main(void)
{
	long long int n, g, s, b;
	scanf("%lld", &n);
	g = n % 10;
	s = (n / 10) % 10;
	b = (n / 100) % 10;
	if (g == s || g == b || s == b)
	{
		printf("有相同");
	}
	else
	{
		printf("全不相同");

	}

	return 0;
}
