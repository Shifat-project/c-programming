#include<stdio.h>
void a(int x,int y)
{
     if (x==y+1) return;
     {
        printf("%d",x);
     }
     a(x+1,y);
     
}
int main()
{
    int n;
    scanf("%d",&n);
    a(1,a);
    return 0;
}