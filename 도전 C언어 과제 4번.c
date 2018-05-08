#include <stdio.h>

int main()
{
	int i, n, m, gcd;

	printf("두 개의 정수 입력:");
	scanf("%d%d", &n, &m);

	for (i = 1; i <= n && i <= m; i++)
	{
		if (n%i == 0 && m%i == 0)
		{
			gcd = i;
		}
	}
	printf("두 수의 최대공약수는 %d\n"gcd);
	return 0;
}