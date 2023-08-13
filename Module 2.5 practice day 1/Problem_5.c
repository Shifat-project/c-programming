#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for ( i = 1; i <= a; i++)
    {
        if (i%5==0)
        {
           printf("%d YES\n",i);
        }
        else
        {
            printf("%d NO\n",i);
        }
    }
    
    return 0;
}