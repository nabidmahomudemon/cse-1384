#include<stdio.h>
void main()
{
    int fn, sn, a, s, m, d, mod; // Variable Declaration
    printf("Enter Your 1st Number : ");
    scanf("%d",&fn);
    printf("Enter Your 2nd Number : ");
    scanf("%d",&sn);
    a = fn + sn;
    s = fn - sn;
    m = fn * sn;
    d = fn / sn;
    mod = fn % sn;
    printf("%d + %d = %d\n", fn, sn, a);
    printf("%d - %d = %d\n", fn, sn, s);
    printf("%d * %d = %d\n", fn, sn, m);
    printf("%d / %d = %d\n", fn, sn, d);
    printf("%d %% %d = %d\n", fn, sn, mod);
}
