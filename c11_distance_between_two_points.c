#include<stdio.h>
#include<math.h>
int main()
{
   int x1, y1, x2, y2, x, y, dystans;

   printf("Wpisz koordynaty pierwszego punktu: ");
   scanf("%d %d",&x1, &y1);
   
   printf("Wpisz koordynaty drugiego punktu: ");
   scanf("%d %d",&x2, &y2);

   x = (x2-x1);
   y = (y2-y1);
   
   dystans = sqrt(x*x + y*y);
   
   printf("Odleglosc = %d", dystans);

   return 0;
}
