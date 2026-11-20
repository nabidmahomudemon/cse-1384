#include<stdio.h>
void main()
{
    int bp,sp,p,per; // Variable Declaration
    printf("Enter Your Product Price : ");
    scanf("%d",&bp); // Variable Assignment
    printf("Enter Your selling Price : ");
    scanf("%d",&sp); // Variable Assignment
    p = sp - bp;
    per = (p*100/bp);
    printf("Your profit is %d\n", p);
    printf("%d %% Profit in one product", per);
}
