#include<stdio.h>
#include<math.h>
int main()
{
    float a, b;
    printf("Enter side for area: \n");
    scanf("%f", &a);
    b=(sqrt(3)/4)*(a*a);
    printf("equilateral triangle area: %f", b);
    return 0;

}
