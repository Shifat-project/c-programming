#include<stdio.h>
#include<string.h>
void fun(char ar[])
{
    int sz=sizeof(ar)/sizeof(char);
    printf("%d",sz);
}
int main()
{
    char ar[20]="hello";
    fun(ar);
    return 0;
}