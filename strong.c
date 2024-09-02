#include<stdio.h>
void main()
{   int a,b,c,d,ans=0,fact;
    printf("Program to Check Strong Number or Not");
    printf("\n\n Enter the number =  ");
    scanf("%d",&b);
    for(c=b; c>0; c=c/10) {
        fact=1;
        for(d=1; d<=c%10; d++) {
            fact*=d;
        }
        ans+=fact;
    }
    if(ans==b) {
        printf("\n\tThe number %d is strong\n\t",b);
    }
    else {
        printf("\n\tThe number %d is not strong",b);
    }
}