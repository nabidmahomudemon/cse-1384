#include<stdio.h>
void main()
{
    int id, sl, dept,semester, year;
    printf("Enter Your 8 Digit Student ID: ");
    scanf("%d", &id);
    sl= id%1000;
    dept= (id/1000)%100;
    semester= ((id/1000)/100)%10;
    year= ((id/1000)/100)/10;
    printf("|\n|\n Your Serial Number: %d\n '0%d' Represent CSE Department.\n '%d'  Represent Summer Semester.\n '%d' Represent Year.\n|\n|",
           sl, dept, semester, year);
}

