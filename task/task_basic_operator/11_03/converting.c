#include<stdio.h>
int main()
{
    float a, b, c;
    printf("Enter number for cm: \n");
    scanf("%f", &a);

    b= a/100;
    c= a/100000;

    printf("Converting number of meter is: %f\n", b);
    printf("Converting number of kilometer is: %f\n", c);

    return 0;
}
