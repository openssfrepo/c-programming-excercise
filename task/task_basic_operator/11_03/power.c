#include<stdio.h>
int main()
{
    float a, b, c;
    printf("Enter number for base: \n");
    scanf("%f", &a);
     printf("Enter number for exponent: \n");
    scanf("%f", &b);
c= pow(a, b);
 printf("power:%f", c);
   return 0;
}

