// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321

#include <stdio.h>
int main()
{
    int i, j, N;
    printf("Enter rows :- ");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (j = i * 2; j < N * 2; j++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}