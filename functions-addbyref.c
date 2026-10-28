#include<stdio.h>
void incrementByValue (int num) {
num = num + 10;
printf("Inside IncrementByValue function num = %d\n", num);
}
void IncrementByRefernce (int *num) {
*num = *num = 10;
printf("Inside IncrementByReference function: *num = %d\n", *num);
}
int main () {
int a = 50;
int b = 50;
printf("---Call By Value---");
printf("Before Function Call: a = %d\n", a);
incrementByValue(a);
printf("After function Call: a = %d (Unchanged)\n\n", a);

printf("---Call By Reference---\n");
printf("Before function call: b = %d\n", b);
IncrementByRefernce(&b);
printf("After function call:b = %d (modified)\n", b);

return 0;
}
