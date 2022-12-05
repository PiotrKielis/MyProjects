// wczytaj n pomiarów oraz wyświetl wartość średnich tych pomiarów
#include<stdio.h>
#include<stdlib.h>

int main()
{
    float *p, sum = 0;
    int i, n;
    printf("Wprowadz liczbe pomiarow: ");
    scanf("%d", &n);
    p = (float*)malloc(n*sizeof(float));
    if(p==NULL)
    {
        printf("Alokowanie pamieci zakonczone niepowodzeniem");
        exit(1); 
    }
    for(i = 0; i < n; i++)
    {
        printf("Wprowadz pomiar numer %d : ", i+1);
        scanf("%f", p+i);
    }
    for(i = 0; i < n; i++)
    {
        sum += *(p+i);
    }
    printf("\nSrednia wczytanych pomiarow = %.2f\n", sum/n);
    free(p);
    return 0;
}
