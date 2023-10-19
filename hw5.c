#include <stdio.h>

void jinsu(int num)
{
	if (num <= 0)
		return;
	jinsu(num / 2);
	printf("%d", num % 2);
	
}


int main()
{
	int num;
	printf("양의 정수 입력: ");
	scanf("%d", &num);
	jinsu(num);

	return 0;
}

/*int jinsu(int num)
{
	while (num > 0)
	{
		if (num % 2 == 1)
		{
			printf("1");
		}

		else if (num % 2 == 0)
		{
			printf("0");
		}
		num = num / 2;
	}
}
*/