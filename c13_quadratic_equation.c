#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void kwadratowa(float a,float b, float c, float x1, float x2, float n);
int main(int argc, char *argv[])
{
	float a,b,c,x1,x2,n;
	printf("Podaj parametry funkcji kwadratowej:\na: ");
	scanf("%f",&a);
	printf("b: ");
	scanf("%f",&b);
	printf("c: ");
	scanf("%f",&c);
	printf("Podaj przedzialy:\nx1: ");
	scanf("%f",&x1);
	printf("x2: ");
	scanf("%f",&x2);
	printf("Podaj ilosc elementow pomiedzy granicami przedzialu:\nn: ");
	scanf("%f",&n);
	kwadratowa(a,b,c,x1,x2,n);
	
	return 0;
}

void kwadratowa(float a,float b, float c, float x1, float x2, float n)
{
	float i=x1;
	float y;
	float przedz=(x2-x1)/n;
	printf("%f, %f",przedz,i);
	
	FILE *fp;
	fp=fopen("pomiar.csv","w");
	for(i=x1;i<=x2;)
	{
		y=a*i*i+b*i+c;
		fprintf(fp,"%f;%f\n",i,y);
		printf("x=%f;y=%f\n",i,y);
		i=i+przedz;
	};
	fclose(fp);
}
