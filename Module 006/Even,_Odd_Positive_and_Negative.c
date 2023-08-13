#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
   int b;
   int even=0,odd=0,positive=0,negative=0;
   for (int i = 1; i <= a; i++)
   {
    scanf("%d",&b);
   if (b%2==0)
   {
    even++;
   }
   else
   {
    odd++;
   }
   if (b>0)
   {
    positive++;
   }
   else if (b<0)
   {
    negative++;
   }
   
   

   }
   printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,positive,negative);
    
    return 0;
}