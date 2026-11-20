#include<stdio.h>
#include<math.h>
void main()
{
    float num, result;
    printf("Enter a number: ");
    scanf("%f", &num);
    result = sqrtf(num);
    printf("Squre root of %.2f = %.2f\n", num, result);
}

