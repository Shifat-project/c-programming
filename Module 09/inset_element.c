#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n+1];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&ar[i]);
    }
    int a,b;
    scanf("%d %d",&a,&b);
    
    for ( int i = n; i >= a+1; i--)
    {
        ar[i]=ar[i-1];
    }
    ar[a]=b;
   for (int i = 0; i <= n; i++)
   {
     printf("%d ",ar[i]);
   }
   
    return 0;
}