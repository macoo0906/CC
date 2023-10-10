#include <stdio.h>

int main()
{
	int num;
	int prime = 1;
	printf("Please enter a number: ");
	scanf("%d", &num);

	if (num < 2)
		prime = 0;
	else
	{
		for (int i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				prime = 0;
				break;
			}
		}
	}
	if (prime)
		printf("It is a prime number.");
	else
		printf("It is not a prime number. ");


	return 0;
}