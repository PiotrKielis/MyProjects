#include <stdio.h>
#include <stdlib.h>

int strlen(char *s) 
{
  int n;

  for(n = 0; *s != '\0'; s++)
  {
    n++;
  }
  return n;
}

int strcmp(char *s, char *t)
{
  for(;*s == *t; s++, t++)
    if(*s == '\0')
      return 0;
  return *s - *t;
}


int strend(char *s, char *t)
{
  int Result = 0;
  int s_length = 0;
  int t_length = 0;

  s_length = strlen(s);
  t_length = strlen(t);

  if(t_length <= s_length)
  {
    s += s_length - t_length;

  if(0 == strcmp(s, t))
  {
    Result = 1;
  }
}

  return Result;
}

int main(void)
{
  char *s1 = "Random String";
  char *s2 = "ing";

  if(strend(s1, s2))
  {
    printf("String %s zawiera sie na koncu w %s\n", s1, s2);
    return 1;
  }
  else
  {
    printf("String %s nie zawiera sie na koncu %s\n", s1, s2);
    return 0;
  }
  
}
