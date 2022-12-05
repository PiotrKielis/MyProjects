#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int ciag(int);
void zapisuj(int i, double time_spend1);

int main() 
{

	printf("Podaj liczbe:\n ");
	int n;	
	scanf("%d", &n);
	int i;
	clock_t start = clock();
  	FILE *plik;
  	plik=fopen("plik.csv", "w");
  
  	
	for (i = 1; i <= n; i++) 
  	{
		clock_t start1 = clock();
    	clock_t stop1= clock();
        printf("%d:", ciag(i));
    	double time_spend1 = (double)(stop1-start1)/CLOCKS_PER_SEC;
		printf("Czas rekurencyjny: %.3f sekundy.\n", time_spend1);
		fprintf(plik, "%d   ;  %.3f \n ",i, time_spend1);
  	}
  	
  
  	for (i = 1; i <= n; i++) 
  	{
		clock_t start1 = clock();
    	clock_t stop1= clock();
        printf("%d:",fib2(i));
    	double time_spend1 = (double)(stop1-start1)/CLOCKS_PER_SEC;
		printf("Czas iteracyjny: %.3f sekundy.\n", time_spend1);
		fprintf(plik, "%d   ;  %.3f \n ",i, time_spend1);
  	}
  
  	fclose(plik);
  	clock_t stop = clock();
  	double time_spend = (double)(stop-start)/CLOCKS_PER_SEC;
    printf("Czas: %.8f sekundy.\n", time_spend);
  	return 0;
}

int ciag(int n) 
{
	int a;
  	if (n == 1)
    	a = 1;
  	if (n == 2)
   		a = 1;
  	if (n > 2)
    	a = ciag(n - 2) + ciag(n - 1);
  	return a;
}

int fib2(int n)
{
    int x0 = 0;
    int x1 = 1;
    int i;
 
    for( i = 0; i < n; ++i) 
	{
    	int temp = x0 + x1;
        x0 = x1;
        x1 = temp;
	}
 
    return x0;
}
