#include<stdio.h>

void main()
{int i,s;
printf("please enter a big number\n"); 
scanf("%d",&s);
if(s<1000){printf("🤬 Small number! Big number: greater than 1000\n");
scanf("%d",&s);}
while(s>1000)
{for(i=0;i<=s;i++)
  {printf("🤗");}}
}