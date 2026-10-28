#include<stdio.h>
#include<conio.h>
int main()
{

int a, b, c;

printf("Enter the length of each side of triangle: ");
scanf("%d%d%d", &a, &b, &c);

    if((a==b)&&(b==c)&&(c==a))
        printf("It is an equilateral triangle");
    else if((a==b)||(b==c)&&(a==c))
        printf("It is an isocles triangle.");
    else if((a!=b)&&(b!=c)&&(a!=c))
        printf("It is a squalene triangle.");
    else
        printf("Not a triangle");

    return 0;
}
