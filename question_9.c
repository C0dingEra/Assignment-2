/*9. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)*/
#include<stdio.h>
int main()
{
    int a,x,y;
printf("enter your digit\n");
scanf("%d",&a);
x=a%10;
y=a-x;

printf("your digit is %d",y);

    return 0;
}
