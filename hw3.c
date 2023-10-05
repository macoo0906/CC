#include <stdio.h>

int main()
{
	int i,j;
	int star=5;

	for (i = 1; i <= star; i++)
	{
		for (j = 1; j <= star-i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
return 0;





}