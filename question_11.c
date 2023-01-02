/*11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
and convert it into USD.*/

#include<stdio.h>
int main()
{
float dollar,INR;
printf("enter your amount to change dollar into INR\n");
scanf("%f",&dollar);
INR=dollar*76.23;
printf("your amount in INR is %.2f",INR);

    return 0;
}
