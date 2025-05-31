#include<stdio.h>

int main()
{
    int a,b,add,sub,mul,mod;
    float div;
    printf("Enter First Value: ");
    scanf("%d",&a);
    printf("Enter Second Value: ");
    scanf("%d",&b);
    add = a+b;
    sub  = a-b;
    mul = a*b;
    div = a/b;
    mod = a%b;
    printf("The Sum of %d and %d is %d\n",a,b,add);
    printf("The Subtraction  of %d and %d is %d\n",a,b,sub);
    printf("The Product of %d and %d is %d\n",a,b,mul);
    printf("The Division  of %d and %d is %f\n",a,b,div);
    printf("The Modules of %d and %d is %d\n",a,b,mod);

    return 0;

}
