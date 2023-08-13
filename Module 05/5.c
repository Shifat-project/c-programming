#include<stdio.h>
int main()
{
    int a;
    char b;
    scanf("%c",&b);
    if (b>='0' && b<='9')
    {
        printf("IS DIGIT");
    }
    else
    {
        printf("ALPHA\n");
        if (b>='A' && b<='Z')
        {
           printf("IS CAPITAL");
        }
        if (b>='a' && b<='z')
        {
           printf("IS SMALL");
        }
    }
  
    return 0;
}