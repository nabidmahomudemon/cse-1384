#include<stdio.h>
#include<math.h>

void main()
{
    int y, l;
    printf("Enter Year: ");
    scanf("%d", &y);
    ((y%4==0 && y%100!=0) || y%400==0) ? printf("Is Leap Year") : printf("Not Leap Year");
}

