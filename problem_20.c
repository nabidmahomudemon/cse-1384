#include<stdio.h>
void main()
{
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c",&ch);
    if (a == b && b == c)
        printf("equilateral triangle\n");
    else if (a == b || b==c || a==c)
        printf("isosceles triangle\n");
    else
        printf("scalene triangle\n");
}

