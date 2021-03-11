#include<stdio.h>
int main()
{
    double a, b;

    printf("Enter number for Farenheit:- \n");
    scanf("%lf", &a);

    b=(a-32)*5/9;

    printf("celsius :%lf\n", b);


    return 0;
}
