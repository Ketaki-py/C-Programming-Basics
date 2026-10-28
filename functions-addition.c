#include<stdio.h>
int addition (int a, int b);
void main()
{
    int c, d, result;
    printf("Enter two numbers: ");
    scanf("%d%d", &c, &d);
    result=addition (c, d);
    printf("Addition is %d", result);
}
int addition (int a, int b)
{
    int ans;
    ans = a+b;
    return ans;
}
