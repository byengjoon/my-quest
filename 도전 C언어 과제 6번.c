#include <stdio.h>

int main()
{
	int n, i;

	for (i = 2; i <= 29; i++)
	{
		for (n = 2; n <= i; n++)
		{
			if (i%n == 0)
			{
				break;
			}
		}
		if (i == n)
		{
			printf(" %d ", i);
		}
	}
	return 0;
}