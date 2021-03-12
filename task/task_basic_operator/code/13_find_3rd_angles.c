#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers: \n");
    scanf("%d%d", &a,&b);

    c=180-(a+b);
    printf("third angle is: %d", c);
    return 0;
}
