#include<stdio.h>
int main()
{
    double a, b;

    printf("Enter number for celsisu:- \n");
    scanf("%lf", &a);

    b=(a*9/5)+32;

    printf("Farenheit :%lf\n", b);


    return 0;
}
