#include<stdio.h>
int main()
{
    int a,x,y;
    printf("enter the value of number\n");
    scanf("%d",&a);
x=a%10;
y=a/10;
x=x+y%10;
x=x+y/10;
printf("sum of given three digit number is %d",x);


}
