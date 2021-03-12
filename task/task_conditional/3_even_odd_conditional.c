#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a numbers: \n");
    scanf("%d", &a);

   b=(a%2==0)? printf("It is a even number \n"):printf("It is a odd number \n");


    return 0;
}

