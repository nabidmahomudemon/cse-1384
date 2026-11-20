#include<stdio.h>
void main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    if (num > 0)
        printf("Positive\n");
    else if (num < 0)
        printf("Negative\n");
    else
        printf("Zero\n");
}
