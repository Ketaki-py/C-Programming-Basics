#include<stdio.h>
float area (float l, float b);
void main()
{
    float c, d, result;
    printf("Enter length and breadth: ");
    scanf("%f%f", &c, &d);
    result=area (c, d);
    printf("Area is %f", result);
}
float area (float l, float b)
{
    float ans;
    ans = l * b;
    return ans;

}
