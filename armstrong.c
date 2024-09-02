#include<stdio.h>
#include<math.h>
void main()
{   int  a,s,k,m=0,i=0;
float l=0;
    printf("\n Enter a   number =\t");
    scanf("%d",&a);
    k=a;
   for(s=k;s>0;s/=10){
    l++;}
    while(k!=0) {
        m=k%10;
        i= i+ pow(m,l);
        k=k/10;
    }
    if(i==a)
    {   printf("\n The number '%d' is armstrong",a);
    }
    else {
        printf("\n The no %d is not armstrong",a);
    }
}


    