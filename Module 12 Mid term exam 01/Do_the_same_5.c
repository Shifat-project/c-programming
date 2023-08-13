#include <stdio.h>

int main() {
   int n,m;
   scanf("%d %d",&n,&m);
   int count=0;
   for(int i=1;i<=m;i++)
   {
       for(int i=1;i<=n;i++)
       {
          printf("%d ",i); 
       }
       printf("\n");
   }

    return 0;
}