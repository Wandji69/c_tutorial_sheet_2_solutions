#include <stdio.h>

int main()
{
    printf("\n***************************************************************************\n");
    printf("A program to read two matrices, calculate their product and display the result\n");
    printf("***************************************************************************\n\n");

    int r1, c1, r2, c2, i, j, k;

    printf("Enter rows and column for first matrix: ");
    scanf("%d %d", &r1, &c1);

    //initialize matrix a
    int a[r1][c1];

    printf("Enter rows and column for second matrix: ");
    scanf("%d %d",&r2, &c2);

    //initialize matrix b
    int b[r2][c2];

    //initialize matrix result
    int result[r1][c2];

    // Column of first matrix should be equal to column of second matrix and
    while (c1 != r2)
    {
        printf("Error! column of first matrix not equal to row of second.\n\n");
        printf("Enter rows and column for first matrix: ");
        scanf("%d %d", &r1, &c1);
        printf("Enter rows and column for second matrix: ");
        scanf("%d %d",&r2, &c2);
    }

    // Storing elements of first matrix.
    printf("\nEnter elements of matrix 1:\n");
    for(i=0; i<r1; ++i)
        for(j=0; j<c1; ++j)
        {
            printf("Enter elements a%d%d: ",i+1, j+1);
            scanf("%d", &a[i][j]);
        }

    // Storing elements of second matrix.
    printf("\nEnter elements of matrix 2:\n");
    for(i=0; i<r2; ++i)
        for(j=0; j<c2; ++j)
        {
            printf("Enter elements b%d%d: ",i+1, j+1);
            scanf("%d",&b[i][j]);
        }

    // Initializing all elements of result matrix to 0
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
        {
            result[i][j] = 0;
        }

    // Multiplying matrices a and b and
    // storing result in result matrix
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
            for(k=0; k<c1; ++k)
            {
                result[i][j]+= a[i][k] * b[k][j];
            }

    // Displaying the result
    printf("\nOutput Matrix:\n");
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
        {
            printf("%d  ", result[i][j]);
            if(j == c2-1)
                printf("\n\n");
        }
    return 0;
}