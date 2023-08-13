// 1.Has Return + Parameter

#include<stdio.h>
int a (int b,int c)
{
    int a=b*c;
    return a;
}

int main()
{
   int s=a(10,25);
   printf("%d",s);

    return 0;
}

//2.Has Return + No Paramete

#include<stdio.h>
#include<math.h>
int n()
{
int c,d;
scanf("%d %d",&c,&d);
int x=pow(c,d);
return x;
}    

int main()
{
    int x=n();
    printf("%d",x);
    return 0;
}

//3.No Return + Parameter

#include<stdio.h>
void z(int c,int d)
{
    if (c%d==0 || d%c==0)
    {
        printf("even");
    }
    else
    {
        printf("odd"); 
    }
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    z(a,b);
    return 0;
}

//4.No Return + No Parameter

#include<stdio.h>
void y()
{
    int n,s,k;
    scanf("%d",&n);
    s=n-1,k=1;
    for (int i = 1; i <=n; i++)
    {
        for (int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        s--,k=k+2;
        printf("\n");
    }
}
int main()
{
    y();
    return 0;
}