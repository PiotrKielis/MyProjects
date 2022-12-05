/*
int strend(char *s1, char *s2)
{
  char *ps1 = s1;
  char *ps2 = s2;
  for ( ; *s1; s1++);
  for ( ; *s2; s2++);
  for ( ; *s1 == *s2; s1--, s2--)
    if ( s2 == ps2 || s1 == ps1 )
      break;        //jest na pocz.tekstu
 
  if  (*s1 == *s2 && s2 == ps2 && *s1 != '\0')
    return 1;
  else
    return 0;
}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strend(char *str1, char *str2) 
{
   int  a, flaga=0, licznik=0;
   a=strlen(str1)-strlen(str2);
   
    while(licznik<strlen(str2)) 
    {
       if (*(str1+a) == *(str2+licznik))
       {
          flaga=1;
          licznik++;
          a++;
          continue;
       }
       else
       {
          flaga=0;
          break;
       }
    }

    return flaga;
}

int main(void) 
{
   int flaga=strend("Cześć", "eść");
   printf("%i\n", flaga);
   return 0;
}
