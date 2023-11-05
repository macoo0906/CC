#include <stdio.h>

int main()
{
	int num[5];

	printf("Please input five integers: ");
	scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);

	
	printf("Odd numbers: ");
	for (int i = 0; i < 5; i++)
	{
		if (num[i] % 2 == 1)
			printf("%d ", num[i]);
	}
	printf("\n");
	printf("Even numbers: ");
	for (int i = 0; i < 5; i++)
	{
		if (num[i] % 2 == 0)
			printf("%d ", num[i]);
	}
	return 0;
}