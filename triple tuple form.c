#include<stdio.h>
void main()
{   printf("\t\tSPARSE MATRIX\n\n");
// hello today we are going to make a sparse matrix
    int a[10][10],s[10][10],c,b,i,j,k;
    printf("Enter the number of row \t");
    scanf("%d",&b);
    printf("Enter the number of column \t");
    scanf("%d",&c);
    printf("\nEnter the elements of matrix \n");
    for(i=0; i<b; i++) {
        for(j=0; j<c; j++) {
            printf("\n a[%d][%d]\t",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n The matrix stored is \n\t");
    for(i=0; i<b; i++)
    {
        for(j=0; j<c; j++)
        {

            printf("%d\t",a[i][j]);
            if(j==c-1) {
                printf("\n\t");
                break;
            }
        }
    }
    printf("\nThe non-zero elements of matrix in triple tuple form is\n\t");
    for(i=0; i<b; i++)
    {   for(j=0; j<c; j++)
        {   if(a[i][j]!=0)
            {   s[k][0]=i;
                s[k][1]=j;
                s[k][2]=a[i][j];
                k++;
            }
        }
    }printf("row\tcolumn\tvalue\n\t");
    for(i=0; i<k; i++) {
        for(j=0; j<=2; j++)
        {   printf("%d\t",s[i][j]);
            if(j==2) {
                printf("\n\t");
            }
        }
    }
}