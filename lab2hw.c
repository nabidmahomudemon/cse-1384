#include<stdio.h>
void main()
{
    int l, w, a; // Variable Declaration
    printf("Finding Area of a Rectangular land in Meter\n");
    printf("Input Lands Length (m) : ");
    scanf("%d",&l); // Variable Assignment
    printf("Input Lands Width (m) : ");
    scanf("%d",&w); // Variable Assignment
    a = l*w;
    printf("Area = %d * %d = %d m\n", l, w, a);

}

