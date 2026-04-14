#include <stdio.h>

int main()
{
    int n;

    // Input size
    scanf("%d", &n);

    int matrix[n][n];

    // Input matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check Identity Matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (matrix[i][j] != 1)
                {
                    printf("Not an Identity Matrix\n");
                    return 0;
                }
            }
            else
            {
                if (matrix[i][j] != 0)
                {
                    printf("Not an Identity Matrix\n");
                    return 0;
                }
            }
        }
    }

    printf("Identity Matrix\n");

    return 0;
}