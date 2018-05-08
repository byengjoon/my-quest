#include <stdio.h>

int main()
{
	int h, m, s;
	printf("초를 입력하시오:");
	scanf("%d", &s);
	m = s / 60;
	h = m / 60;
	s = s % 60;
	m = m % 60;
	printf("[h:%d, m:%d, s:%d]\n", h, m, s);
	return 0;
}