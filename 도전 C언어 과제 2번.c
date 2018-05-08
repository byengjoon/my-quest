#include <stdio.h>
int main(void)
{
	int i, j, n;

	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++) {
			n = i * j;
			printf("%d %d´Â %d\n", i, j, n);
		}
	}
	return 0;
}