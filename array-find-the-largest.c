#include<stdio.h>
int main () {
int a[5], i, largest=0, sum=0;

printf("Enter 5 elements: ");
for (i=0; i<5; i++) {
    scanf("%d", &a[i]);
}
largest = a[i];
for (i=0; i<5; i++) {
    if (a[i]> largest) {
        largest = a[i];
        sum = sum + a[i];
    }
}
printf("Largest element is %d", largest);
printf("\nSum is %d", sum);

return 0;
}
