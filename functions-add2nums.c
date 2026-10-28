#include<stdio.h>
void CheckEvenOdd(int *a) {
int num;

if (*a%2==0)
    printf("Even number.");
else
    printf("Odd Number.");
}
int main () {
int x;
printf("Enter a number: ");
scanf("%d", &x);
CheckEvenOdd(&x);
return 0;
}
