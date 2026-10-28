#include<stdio.h>
int main() {
int a[10][10], r, c, i, j, sum=0, cnt=0;

printf("How many rows & columns: ");
scanf("%d%d", &r, &c);

printf("Enter numbers for matrix: ");
for (i=0; i<r; i++)
{
    for (j=0; j<c; j++) {
        scanf("%d", &a[i][j]);
    }
}
printf("Matrix is :\n");
for (i=0; i<r; i++) {
    for (j=0; j<c; j++) {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}

printf("\nOdd numbers in the matrix are: \n");
for (i=0; i<r; i++) {
    for (j=0; j<c; j++) {
        if (a[i][j]%2==1)
        {
            printf("%d", a[i][j]);
            cnt++;
        }
    }
}

printf("\nSum of Matrix: \n");
for (i=0; i<r; i++) {
    for (j=0; j<c; j++) {
        sum = sum+a[i][j];
    }
}
printf("Sum is %d", sum);
return 0;
}
