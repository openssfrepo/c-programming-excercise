#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter numbers for height: \n");
    scanf("%d", &a);
     printf("Enter numbers for base: \n");
    scanf("%d", &b);

    c=(a*b)/2;
    printf("its area is: %d", c);
    return 0;
}
