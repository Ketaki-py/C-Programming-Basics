#include<stdio.h>
int add (int a, int b) {
int sum = a + b;
return sum;
}
int main () {

int num1 = 10;
int num2 = 20;

int result = add(num1, num2);
printf("Result (Call by value) %d\n", result);
return 0;
}
