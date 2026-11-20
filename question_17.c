#include<stdio.h>
void main()
{
    int a, b, c;
    printf("Enter 3 Side of the triangle: ");
    scanf("%d %d %d",&a, &b, &c);
    if (a == b && b==c)
        printf("equilateral triangle\n");
    else if (a == b || b==c || a==c)
        printf("isosceles triangle\n");
    else
        printf("scalene triangle\n");
}

