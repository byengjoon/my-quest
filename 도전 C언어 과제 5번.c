#include <stdio.h>

int main()
{
	int have = 3500;
	int a;
	int b;
	int c;

	printf("당신이 가지고 있는 금액 : %d \n", have);
	printf("크림빵 : 500원\n새우깡 : 700원\n콜 라 : 400원\n");
	printf("잔 돈없이 위의 세 가지 물건을 하나 이상씩 구매하려 한다\n어떻게 구매하시겠습니까?");

	printf("\n크림빵 갯수:");
	scanf("%d", &a);

	if (a == 1) 
		printf("크림빵 1개, 새우깡 2개 콜 라 4개 구매합니다.\n");

	else if (a == 2)
		printf("크림빵 2개, 새우깡 3개 콜 라 1개 구매합니다.\n");
	else if (a == 3)
		printf("크림빵 3개, 새우깡 1개 콜 라 2개 구매합니다.\n");
	

	
	else
		printf("그렇게는 안됩니다.....다시 하세요.\n");
}