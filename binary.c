#include<stdio.h>
void main()
{int a[10],v,i,g,m;
printf("\n Enter the no of digit to be converted\n");
scanf("%d",&m);
printf("\nEnter the decimal number to be converted to binary\n");
scanf("%d",&v);
g=v;
if(v<10){printf("\nSORRY number below 10 can't be converted to binary, please refer a value greater than 10\n");
scanf("%d",&v);
printf("\nEnter the no of digit\n");
scanf("%d",&m);}
for(i=0;i<m;i++)
{a[i]=g%2;
g=g/2;}
printf("The binary form of '%d' is",v);
for(i=0;i<m;i++)
{printf("%d",a[i]);}}