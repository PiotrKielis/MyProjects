#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 6
int main(int argc, char *argv[])
{
int tab[N][N];
int i,j;
int wyb1, wyb2;
srand(time(NULL));

for(i=0;i<N;i++)
	{
	for(j=0;j<N;j++)
		{
		tab[i][j]=rand()%10;
		};
	}

for(i=0;i<N;i++)
	{
	for(j=0;j<N;j++)
		{
		printf("%d ",tab[i][j]);
		};
	printf("\n");
	}
printf("Wybierz opcje do wyswietlenia:\n1. Wypisz wiesz\n2. Wypisz kolumne\n3. Wypisz przekatna\n");
scanf("%d",&wyb1);
if(wyb1==1)
	{
	printf("Wybierz wiersz:");
	scanf("%d",&wyb2);
		for(i=0;i<N;i++)
		{
		printf("%d ",tab[wyb2][i]);
		}
	};
if(wyb1==2)
{
printf("Wybierz kolumne:");
scanf("%d",&wyb2);
	for(i=0;i<N;i++)
	{
	printf("%d\n",tab[i][wyb2]);
	}
};
if(wyb1==3)
{
printf("Wybierz przekatna:");
scanf("%d",&wyb2);
	if(wyb2==1)
	{
	for(i=0;i<N;i++)
		{
		printf("%d\n",tab[i][i]);
			printf("\n");
		};
	};
if(wyb2==2)
{i=0;
	for(j=N-1;j>=0;j--)
	{
	printf("%d\n",tab[j][i]);
	i++;
	printf("\n");
	}		
}
};
return 0;
}
