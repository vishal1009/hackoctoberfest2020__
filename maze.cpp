#include <stdio.h>

int main()
{
    int i, j, rows, columns;

    /* Input rows and columns from user */
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);

    /* Iterate through each row */
    for(i=1; i<=rows; i++)
    {
        /* Iterate through each column */
        for(j=1; j<=columns; j++)
        {
            /* For each column print star */
            printf("*");
        }
        
        /* Move to the next line/row */
        printf("\n");
    }

    return 0;
}
