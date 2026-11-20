#include<stdio.h>
void main()
{
    float a, b, c, d, result;
    printf("Enter a, b, c & d values: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    if (c - d != 0)
    {
        result = (a+b)/(c-d);
        printf("Result = %.2f\n", result);
    }

    else
        printf("(c - d) is Zero.\nDivision not Possible\n");
}

