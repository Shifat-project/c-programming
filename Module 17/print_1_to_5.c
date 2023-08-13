#include<stdio.h>
void a(int i)
{
    if(i==6) return;
printf("%d\n",i);
a(i+1);
}
int main()
{
    a(1);
    return 0;
}