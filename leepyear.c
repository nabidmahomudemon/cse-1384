#include<stdio.h>
#include<math.h>

void main()
{
    int y=2028, l;
    l= y%4==0 ? y%100!=0 : y%400==0;
    printf("%d",l);

    //l == 1 ? printf("Leap Year") : printf("Not Leap Year");



