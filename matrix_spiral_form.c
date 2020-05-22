#include<stdio.h>
 
void spiral_Print(int m, int n, int a[][n])
{
    int i,  k = 0, l = 0;
    m--, n--;
 
    while(k <= m && l <= n)
    {
        // Print the row left to right
        for(i = l; i <= n; ++i)
        {
            printf("%d ", a[k][i]);
        }
 
        // Print the column top to bottom
        k++;
        for(i = k; i <= m; ++i)
        {
            printf("%d ", a[i][n]);
        }
 
        // Print the row right to left
        n--;
        if(m >= k)
        {
            for(i = n; i >= l; --i)
            {
                printf("%d ", a[m][i]);
            }
            m--;
        }
 
        // Print the column bottom to top
        for(i = m; i >= k; --i)
        {
            printf("%d ", a[i][l]);
        }
 
        l++;
    }
 
    printf("\n");
}
 
int main(void)
{
    int arr[4][4] = { {1, 2, 3, 4},
					{5, 6, 7, 8,},
                    {9, 10, 11, 12},
                    {13, 14, 15, 16}};
 
    spiral_Print(4, 4, arr);
 
    return 0;
}