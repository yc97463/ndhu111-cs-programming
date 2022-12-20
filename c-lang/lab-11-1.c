#include <stdio.h>

char *mystrcat(char *dest, char *src)
{
  size_t i, j;
  for (i = 0; dest[i] != '\0'; i++)
    ;
  for (j = 0; src[j] != '\0'; j++)
    dest[i + j] = src[j];
  dest[i + j] = '\0';
  return dest;
}

char *mystrncat(char *dest, char *src, int n)
{
  size_t i, j;
  for (i = 0; dest[i] != '\0'; i++)
    ;
  for (j = 0; j < n && src[j] != '\0'; j++)
    dest[i + j] = src[j];
  dest[i + j] = '\0';
  return dest;
}

int main()
{
  char s1[300], s2[100];
  int n;
  scanf("%s%s%d", s1, s2, &n);
  printf("%s\n", mystrcat(s1, s2));
  printf("%s", mystrncat(s1, s2, n));
  return 0;
}