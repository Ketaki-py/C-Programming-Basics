#include <stdio.h>

int main(){
    int n, i , sum=0;

    printf("Enter the Number:");
    scanf("%d", &n);

    while (i<=n){
        sum = sum+i;
        i++;
    }
        printf("The SUM is %d", sum);
    return 0;
}
