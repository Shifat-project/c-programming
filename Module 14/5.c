#include<stdio.h>
#include<string.h>
int is_palindrome(char *k)
{
    char a[11];
    for(int i=0;i<strlen(k);i++)
    {
        a[i]=k[i];
    }
    int i=0,j=strlen(k)-1;
    while(i<j)
    {
        char temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    int flag=1;
    for(int i=0;i<strlen(k);i++)
    {
    if(a[i]!=k[i]){
        flag=0;
    }
    }
    return flag;

}
int main()
{   
    char s[11];
    scanf("%s",s);
    int m=is_palindrome(s);
    if(m)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome");
    }
    return 0;
}