#include<stdio.h>
int main()
{

    int a;
    scanf("%d", &a);
    printf("%d\n",a);


    float b;
    scanf("%f", &b);
    printf("%.2f\n",b);


    double c;
    scanf("%lf", &c);
    printf("%lf\n",c);


    char flower;
    scanf(" %c", &flower);
    printf("%c\n",flower);

    char sky[]="";
    scanf("%s", &sky);
    printf("%s\n",sky);
    printf("%c",sky[6]);


    char emon[100]="";
    gets(emon);
    puts(emon);

    return 0;
}
