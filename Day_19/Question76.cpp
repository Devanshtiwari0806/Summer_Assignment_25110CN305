// Program to find diagonal sum

#include <stdio.h>

int main() 
{
    int n, sum = 0;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter matrix elements:\n");
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < n; j++) 
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int i = 0; i < n; i++) 
    {
        sum = sum + a[i][i];
    }

    printf("Sum of principal diagonal elements = %d", sum);
    return 0;
}