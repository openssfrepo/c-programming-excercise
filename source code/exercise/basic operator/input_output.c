#include<stdio.h>
int main()
{
    //take input as a integer
    int a;
    scanf("%d", &a);
    printf("%d\n",a);
    
    // take input as float
    float b;
    scanf("%f", &b);
    printf("%.2f\n",b);

    // take input as double
    double c;
    scanf("%lf", &c);
    printf("%lf\n",c);

    // take input as character
    char flower;
    scanf(" %c", &flower);
    printf("%c\n",flower);

    //take input as word
    char sky[]="";
    scanf("%s", &sky);
    printf("%s\n",sky);
    printf("%c",sky[6]);

    //take input as sentence
    char emon[100]="";
    gets(emon);
    puts(emon);

    return 0;
}


// create new code that contain basic operator like + , -, * , / in new file