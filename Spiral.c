#include <stdio.h>
int main()
{
    int row, column;
    printf("input size of row : ");
    scanf("%d", &row);
    printf("input size of column : ");
    scanf("%d", &column);

    int array[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < column; j++)
            {
                printf("%d ", array[i][j]);
            }
        }

        else if (i % 2 != 0)
        {
            for (int j = column - 1; j >= 0; j--)
            {
                printf("%d ", array[i][j]);
            }
        }
    }

    return 0;
}