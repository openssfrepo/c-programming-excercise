#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a, &b);
    c=(a>b)?a:b;
    printf("Maximum number: %d\n", c);
    return 0;
}
