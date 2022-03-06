#include <stdio.h>
int main(void)
{
	int n = 1;
	for (int i = 0; i < 11; i++)
	{

		printf("%d\n", n);
		n *= 8;
	}

	return 0;
}
