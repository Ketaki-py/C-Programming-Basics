#include<stdio.h>
int main() {
int num[10],n,i,sum=0,p=1;

printf("How many numbers: ");
scanf("%d", &n);

printf("\nEnter numbers for matrix: ");
for (i=0; i<n; i++){
    scanf("%d", &num[i]);
}
printf("\nArray elements are: ");
for (i=0; i<n; i++) {
    printf("%d", num[i]);
}
printf("\nSum and product of array int: ");
for (i=0; i<n; i++){
    sum = sum+num[i];
    p = p*num[i];
}

printf("\nSum of array is %d", sum);
printf("\nProduct of array is %d", p);

return 0;
}
