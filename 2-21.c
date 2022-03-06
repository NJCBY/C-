#include <stdio.h>
int main(void)
{
	int a, b;
	char ch;
	scanf("%d %c %d", &a, &ch, &b);
	switch (ch)
	{
		case '+':
			printf("%d+%d=%d", a, b, a + b);
			break;
		case '-':
			printf("%d-%d=%d", a, b, a - b);
			break;
		case '*':
			printf("%d*%d=%d", a, b, a * b);
			break;
		case '/':
			if (b == 0)
			{
				printf("\"Œﬁ“‚“Â\"");
			}
			else
			{
				if (a % b == 0)
				{
					printf("%d/%d=%d", a, b, a / b);
				}
				else
				{
					printf("%d/%d=%d°≠%d", a, b, a / b, a % b);
				}
			}
			break;
		default:
			break;
	}

	return 0;
}
