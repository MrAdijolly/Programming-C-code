#include<stdio.h>
void main()
{   int k[10][10],m[10][10],n[10][10],i,j,a,b,x,y;
    printf("Enter the number of Matrix A's row and column\n\t ");

    scanf("%d%d",&a,&b);
    for(i=1; i<=a; i++)
        for(j=1; j<=b; j++)
        {   printf("\nEnter the elements of matrix A f row[%d] and column[%d]\t\n",i,j);
            scanf("%d",&k[i][j]);
        }
    printf("\n\n\tThe matrix A stored is");
    printf("\n\n");
    printf("matrix A =\n\t");
    for(i=1; i<=a; i++)
        for(j=1; j<=b; j++)
        {
            printf("\t%d",k[i][j]);
            while(j==b)
            {
                printf("\n\t");
                break;
            }}
            printf("\n\n \t\tMatrix B\n\n");
            for(i=1; i<=a; i++)
                for(j=1; j<=b; j++)
                {   printf("\nEnter the elements of matrix B row[%d] and column[%d]\n",i,j);
                    scanf("%d",&m[i][j]);
                }

        
    printf("\n\nThe matrix B stored is\n\n ");
    printf("\tMatrix B =\n\t");
    for(i=1; i<=a; i++)
        for(j=1; j<=b; j++)
        {   printf("%d\t",m[i][j]);
            while(j==b) {
                printf("\n\t");
                break;
            }
        }
    if(a==b) {
        printf("\nProduct of Matrix A and B =\n\n\t Matrix C = M(A)*M(B)");
        printf(" \nMatrix C=\n\t");
        for(i=1; i<=a; i++)
            for(j=1; j<=b; j++) {
                if(i==j!=1)
                 {
                        n[i][j]+=k[i][j]*m[j][i];
                        break;
                    
                }
               if(i==j) {
                        n[i][j]+=k[i][j]*m[j][i];
                        break;
                    }
                }
            
        for(i=1; i<=a; i++)
            for(j=1; j<=b; j++)
            {   printf("%d\t",n[i][j]);
                while(j==b) {
                    printf("\n\t");
                    break;
                }
            }}
    else{printf("\n\tEroor! The product cannot be calculated");}}
    