#include<stdio.h>
void main()
{
    int day, year, month, week, days;
    printf("Enter Day Number: ");
    scanf("%d", &day);
    year= day/365;
    month= (day%365)/30;
    week= ((day%365)%30)/7;
    days= ((day%365)%30)%7;
    printf("|\n|\n %d years\n %d months\n %d weeks\n %d days\n|\n|",
         year, month, week, days);
}

