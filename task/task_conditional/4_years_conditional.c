#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a numbers: \n");
    scanf("%d", &a);

   b=(a%4==0 && a%100!=0)? printf("It is a leap year \n"): (a%400==0)? printf("It is  leap year \n"): printf("It is not a leap year \n");


    return 0;
}


