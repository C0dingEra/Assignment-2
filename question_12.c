/*12. Write a program to take a three digit number from the user and rotate its digits by
one position towards the right.*/
#include<stdio.h>
int main()
{
int x,y,z;
printf("enter your number\n");
scanf("%d",&x);
y=x%10;
z=x/10;
x=(y*100)+z;
printf("your desire digit is %d",x);
    return 0;
}
