#include<stdio.h>
int main()
{
   int i;
    i=100;/*condition false holeo akbar print korbe*/
    do
    {
        printf("%d\n",i);
        i=i+1;
    } 
    while (i<=9);
    
    return 0;
}