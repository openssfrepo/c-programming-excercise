#include<stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter three numbers: \n");
    scanf("%d%d%d", &a, &b, &c);
    d=(a>b && a>c)? a: (b>c)? b:c;
    printf("Maximum number: %d\n", d);
    return 0;
}

