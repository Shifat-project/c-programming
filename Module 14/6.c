//pass by value

#include<stdio.h>
void x(int b)
{
    b=100;
}
int main()
{
    int a=10;
    
    x(a);
    printf("%d",a);
    return 0;
}
Explanation: In the main function, value of variables a are
 not changed though they are passed to function ‘swap’.
  Swap function has a copy of a and hence it can not
   manipulate the actual value of arguments passed to it.

//call by reference
#include<stdio.h>
void a(int *p)
{
   *p=100;
}
int main()
{
    int b=10;
    a(&b);
    printf("%d",b);
    return 0;
}
Explanation : n the main function, address of variables b are sent as arguments to the function ‘swap’.
 As swap function has the access to address of the arguments,
 manipulation of passed arguments inside swap function would be directly reflected in the values of b



