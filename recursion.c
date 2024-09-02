#include<stdio.h>
int fact(int n)
{
 int f;
 if(n==0)
  {return 1;}
else
{f=n*fact(n-1);
return f;}
} 
void main()
{
int n,result;
printf("enter a positive value\t");
scanf("%d",&n);
result =fact(n);
printf("factorial of %d",result);
}