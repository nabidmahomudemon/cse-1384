#include<stdio.h>
#define pi 3.1416
void main()
{
    int r;
    float per, area;
    printf("Enter Radius: ");
    scanf("%d",&r);
    per = 2*pi*r;
    area = pi*r*r;
    printf("Perimeter is %.2f\n", per);
    printf("Area is %.2f\n", area);
}
