#include<stdio.h>
int main()
{ int a,i=0,s=0,l;
printf("\n Enter a 3 digit  number =\t");
scanf("%d",&a);
if(100>a || a>999)
{printf("\n Error, the number is not 3 digit. Please re-enter the number\t");
scanf("%d",&a);}
l=a;
while(a!=0)
{s=a%10;
i+=s*s*s;
a=a/10;}
if(i==l)
{printf("\n The number '%d' is armstrong",i);}
else{printf("\n The no is not armstrong");
printf("%d",i);}
return 0;
}


    