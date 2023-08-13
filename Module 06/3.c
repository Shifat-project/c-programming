#include<stdio.h>
int main()
{
    int n, m=0, b=0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d",&a);
        if (a%2==0)
        {
           m+=a;
        }
        else
        {
            b+=a;
        }
    }
    printf("%d %d",m,b);
   
    return 0;
}