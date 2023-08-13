#include <stdio.h>

int main() {
    float a,b;
    scanf("%d %d",&a,&b);
    float n=b/a;
    int c;
    scanf("%d",&c);
    int m=c/n;
    printf("%d",m);

    return 0;
}