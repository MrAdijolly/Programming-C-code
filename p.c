#include<stdio.h>

void main()
{
    int a;
    int *p;
    p=&a;
    a=5;
    printf("\t%d",a);
    printf("\n%d",*p);
    printf("\n%d",&a);
    printf("\n%d",&p);}