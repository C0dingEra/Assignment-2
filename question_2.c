//2. Write a program to print a given number without its last digit.

#include<stdio.h>
int main()
{
    int number;
    printf("enter the number\n");
    scanf("%d",&number);
    number=number/10;
    printf("last digit is %d",number);
    return 0;
}
