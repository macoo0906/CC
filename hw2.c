#include <stdio.h>

int main(void)
{
	float km;
	float miles;
	printf("Please enter kilometers:");
	scanf("%f", &km);
	miles = km / 1.609;
	printf("%.1f km is equal to %.1f miles.", km, miles);

	return 0;

}