#include<stdio.h>
int main()
{
    double a, b,c, d;
    printf("Enter principle: \n");
    scanf("%lf", &a);
    printf("Enter time: \n");
    scanf("%lf", &b);
    printf("Enter rate: \n");
    scanf("%lf", &c);

    d= a*(pow((1+c/100),b));
    printf("compound interest: %lf\n", d);

return 0;
}

