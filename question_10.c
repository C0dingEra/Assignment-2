/*10. Write a program to input a number from the user and also input a digit. Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)*/



#include<stdio.h>
int main()
{
    int number, digit, z;
    printf("enter any number\n");
    scanf("%d",&number);
    printf("enter any digit\n");
    scanf("%d",&digit);
    z=(number*10)+digit;
    printf("your value is %d",z);
    return 0;
}
