#include <stdio.h>
int main()
{
    int cols, rows, i, j;
    printf("Enter number of rows :- ");
    scanf("%d", &rows);
    printf("Enter number of cols :- ");
    scanf("%d", &cols);

    for ( i = 1; i <= rows; i++)
    {
        for ( j = 1; j <= cols; j++)
        {
            printf("%d",(i%2));
        }
        printf("\n");
    }
    
    return 0;
}