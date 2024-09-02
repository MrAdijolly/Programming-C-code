#include<stdio.h>
void main()
{   int k[10][10],m[10][10] i,j,a,b,x,y;
    printf("Enter the number of elements in row and column\n\t ");

    scanf("%d%d",&a,&b);
    for(i=1; i<=a; i++)
        for(j=1; j<=b; j++)
        {   printf("\nEnter the elements of matrix K of row[%d] and column[%d]\t\n",i,j);
            scanf("%d",&k[i][j]);
        }
        for(i=1;i<=a;i++)
        for(j=1;j<=b;j++)
        {printf("Enter the elements of matrix M  row[%d] and column[%d]",i,j);
        scanf("%d",&m[i][j]);
        }
        printf("\n\n\tThe matrix K stored is");
    printf("\n\n");
    printf("matrix K =\t");
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
        printf("\n\n\tThe matrix M stored is ");
        printf("\tmatrix M =\t");
}
    