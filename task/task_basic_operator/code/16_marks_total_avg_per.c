#include<stdio.h>
int main()
{
    float a,b,c,bangla, english, math, physics, chemistry;
    printf("Enter 5 subjects number: \n");
    scanf("%f%f%f%f%f", &bangla, &english, &math, &physics, &chemistry);

   a=(bangla+english+math+physics+chemistry);
    b= a/5;
    c= (a/500)*100;
    printf("total number: %f\n", a);
    printf("average number: %f\n", b);
    printf("percentage number: %f\n", c);
    return 0;

}
