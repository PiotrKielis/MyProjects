#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
void losowanie(int t[][N],int r);
void wypisanie(int t[][N],int r);
int main()
{
	int tab1[N][N];
	losowanie(tab1,N);
	wypisanie(tab1,N);
	int c;
	printf("Wybierz co chcesz wyswietlic \n1. Wiersz\n2. Kolumne\n3. Przekatna\n");
	scanf("%d",&c);
	if(c==1)
	{
		int w;
		int i;
		printf("Wybierz ktory wiersz wyswietlic\n");
		scanf("%d",&w);
		for(i=0;i<N;i++)
			printf("%d ",*(*(tab1+w)+i));
	}
	if(c==2)
	{
		int w;
		int i;
		printf("Wybierz ktora kolumne wyswietlic\n");
		scanf("%d",&w);
		for(i=0;i<N;i++)	
			printf("%d\n",*(*(tab1+i)+w));
	}
	if(c==3)
	{
		int p;
		printf("Ktora przekatna wyswietlic\n1. Lewa\n2. Prawa\n");
		scanf("%d",&p);
		if(p==1)
		{
			printf("\n");
			int k,i;
			for(k=0;k<N;k++)
			{
				for(i=0;i<N;i++)
				{
					if(k==i)	
						printf("%d \n",*(*(tab1+k)+i));
				}
			}
			
		}
		if(p==2)
		{
			printf("\n");
			int k,i;
			for(k=0;k<N;k++)
			{	
				for(i=0;i<N;i++)
					if(k+i==N-1)
						printf("%d \n",*(*(tab1+k)+i));
			}
		}		
	}
}

void wypisanie(int t[][N],int r)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
			printf("%d ",*(*(t+i)+j));
			printf("\n");
	}
}
void losowanie(int t[][N],int r)
{
	int i,j;
	srand(time(NULL));
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
			*(*(t+i)+j)=rand()%10;	
	}
}
