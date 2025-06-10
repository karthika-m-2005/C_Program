#include<stdio.h>
int main()
{
  int a,b,temp;
  printf("Enter a and b value: ");
  Scanf("%d",&a);
  Scanf("%d",&b);
  printf(" Before Swaping a:%d\nb:%d",a,b);
  temp=a;
  a=b;
  b=temp;
  printf(" After Swaping a:%d\nb:%d",a,b);
