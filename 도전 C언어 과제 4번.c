#include <stdio.h>

int main()
{
	int i, n, m, gcd;

	printf("�� ���� ���� �Է�:");
	scanf("%d%d", &n, &m);

	for (i = 1; i <= n && i <= m; i++)
	{
		if (n%i == 0 && m%i == 0)
		{
			gcd = i;
		}
	}
	printf("�� ���� �ִ������� %d\n"gcd);
	return 0;
}