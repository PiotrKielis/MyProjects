#include <stdlib.h>
#include <stdio.h>
 
int main()
{
    static int array1[10][10], array2[10][10];
    int i, j, m, n, a, b, c, p, q, r;
 
    printf("Podaj liczbe wierszy: ");
    scanf("%d", &m);
    printf("\nPodaj liczbe kolumn: ");
    scanf("%d",&n);
    printf("\nWprowadz elementy do tablicy: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\nWprowadz wartosc dla a[%d][%d] : ",i,j);
            scanf("%d", &array1[i][j]);
            array2[i][j] = array1[i][j];
        }
    }
    
    printf("\nTablica: \n\n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", array1[i][j]);
        }
        printf("\n\n");
    }
    
    printf("\nWybierz pierwszy wiersz do zamiany : ");
    scanf("%d", &a);
    printf("\nWybierz drugi wiersz do zamiany : ");
    scanf("%d",&b);
    
    for (i = 0; i < m; ++i)
    {
        c = array1[a - 1][i];
        array1[a - 1][i] = array1[b - 1][i];
        array1[b - 1][i] = c;
    }
    printf("\nWybierz pierwsza kolumne do zamiany : ");
    scanf("%d", &p);
    printf("\nWybierz druga kolumne do zamiany : ");
    scanf("%d",&q);
    
    for (i = 0; i < n; ++i)
    {
        r = array2[i][p - 1];
        array2[i][p - 1] = array2[i][q - 1];
        array2[i][q - 1] = r;
    }
    printf("\nTablica po zamianie wierszy:  \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", array1[i][j]);
        }
        printf("\n\n");
    }
    printf("\nTablica po zamianie kolumn: \n");
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", array2[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
