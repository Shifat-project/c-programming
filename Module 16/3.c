#include <stdio.h>
int count_before_zero(int ar[], int n) 
{
    for(int i = 0; i < n; i++)
     {
        scanf("%d", &ar[i]);
     }
     int flag = 0;
     for(int i = 0; i < n; i++)
      {
        if(ar[i] != 0) 
        {
            flag++;
        }
        else
        {
            break;
        }
    }
    return flag;
}
int main()
{
    int m;
    scanf("%d", &m);
    int ar[m];
    int counting = count_before_zero(ar , m);
    printf("%d", counting);
    return 0;
}