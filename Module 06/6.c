#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d",&ar[i]);
    }
    int a,b;
    scanf("%d %d",&a,&b);
    for (int i = 0; i < n; i++)
    {
       if (i==a){
        ar[n]=b;
}
       
    }
    
    
    for (int i = n-1; i >=0; i--)
    {
        printf("%d",ar[i]);
    }
    
    return 0;
}
Write to Sifath


