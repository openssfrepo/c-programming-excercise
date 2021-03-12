#include<stdio.h>
int main()
{
    float a, b,c,d;
    printf("Enter number of days: \n");
    scanf("%f", &a);

    b= a/30;
    c= a/7;
    d= a/365;
    printf("Months: %f\n", b);
    printf("weeks: %f\n", c);
    printf("years: %f\n", d);
    return 0;
}
