#include<stdio.h>
int main()
{
    int i;
    int sum=0;
    int n;
    scanf("%d",&n);
    for ( i = 0; i <= n; i=i+1)
    {
     sum+=i;
    }
    printf("%d",sum);
    return 0;
}