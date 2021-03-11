#include<stdio.h>
int main()
{
    float a, b, c, d;
    printf("Enter number for radius: \n");
    scanf("%f",&a);

    b= 2*a;
    c= 2*3.1416*a;
    d= 3.1416*(a*a);

    printf("Diameter of circle is: %f\n", b);
    printf("circumference of circle is: %f\n", c);
    printf("area of circle is: %f\n", d);
    return 0;
}
