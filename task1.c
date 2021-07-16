#include<stdio.h>
int main()
{
int a=1, b=2;
printf("Initially a=%d b=%d",a,b);
a=a+b;/*a is 3*/
b=a-b;/*b is 1*/
a=a-b;/* a is 2*/
printf("\nAfter swap a=%d b=%d",a,b);
return 0;

}
