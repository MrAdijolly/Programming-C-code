#include<stdio.h>
void main()
{   int k[10][10],i,j,a,b;
    printf("Enter the number of elements in row and column\n\t ");

    scanf("%d%d",&a,&b);
    for(i=1; i<=a; i++)
        for(j=1; j<=b; j++)
        {   printf("\nEnter the elements of matrix of row[%d]and column[%d]\t\n",i,j);
            scanf("%d",&k[i][j]);
        }
    printf("\n\n");
    for(i=1; i<=a; i++)
        for(j=1; j<=b; j++)
        {
            printf("\t%d",k[i][j]);
            while(j==b)
            {
                printf("\n");
                break;
            }
        }
}
