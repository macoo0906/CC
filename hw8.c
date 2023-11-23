#include <stdio.h>
#include <math.h>
double dev(int* ptr) {
   int v,s,num1=0, num2=0;
   double p[5];
   double e, deviation;
   for (int j = 0; j < 5; j++)
      num1 += ptr[j];
   e = num1 / 5;
   for (int k = 0; k < 5; k++) 
      p[k] = pow(ptr[k]-e, 2);
   for (int i = 0; i < 5; i++)
      num2 += p[i];
   v = num2 / 5;
   deviation=sqrt(v);
   printf("Standard Deviation: %.3lf", deviation);
}
int main(void)
{
   int arr[5];
   printf("Enter 5 real number:");
   for (int i = 0; i < 5; i++)
      scanf("%d", &arr[i]);
   dev(arr);
   return 0;
}
