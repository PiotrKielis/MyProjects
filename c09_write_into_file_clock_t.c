#include <stdio.h>
#include <time.h>

int fib(int n)
{
	if(n <= 1)
		return n;
	return fib(n-1) + fib(n-2);
}

int main()
{
	FILE *out_file = fopen("Pomiary_czasu.csv","w");
	fprintf(out_file, "element; czas\n");
	for(int i = 1; i <= 46; i +=2)
	{
		int n = i;
		clock_t start = clock();
		int x = fib(n);
		clock_t stop = clock();
		double time_spend = (double)(stop-start)/CLOCKS_PER_SEC;
		fprintf(out_file, "%d; %f\n",n, time_spend );
	}
	fclose(out_file);
	return 0;
}
