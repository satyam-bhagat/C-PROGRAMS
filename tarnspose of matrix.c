#include <stdio.h>
int main()
{
    int i, j;
    int a[10][10], b[10][10];
    int r1, c1;

    printf("Enter the number of rows and columns in the matrix\n");
    scanf("%d%d", &r1, &c1);

    printf("Enter the elements in the matrix A\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The original matrix is:\n");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    printf("The transpose of the matrix is:\n");
    for (i = 0; i < c1; i++)
    {
        for (j = 0; j < r1; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}

