#include <stdio.h>

int main()
{
	int i, n, m;
	printf("두 수를 공백을 두고 입력하시오:");
	scanf("%d%d", &n, &m);
	if (n > m)
	{
		for (m = n; m <= n; m++)
		{
			for (i = 1; i < 10; i++)
			{
				printf("%d%d은 %d\n", m, i, (m*i));

			}
		}
	}
	else
	{
		for (n = n; n <= m; n++)
		{
			printf("%d%d은 %d\n", n, i, (n*i));
		}
	}
	return 0;
}