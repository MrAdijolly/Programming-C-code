#include<stdio.h>
int add(a,b)
{int sum,addition,s;
printf("Enter the limit of fibonacci series\t");
scanf("%d",&s);
addition:{sum = a+b;
printf("\n%d\n",sum);

a=b;
b=sum;}
while(sum<s)
{goto  addition;}
return sum;}

void main()
{int x=0,y=1,ans;
ans = add(x,y);}