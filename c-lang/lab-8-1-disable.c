#include <stdio.h>
#define MAX 100

int main()
{
  char str[MAX] = {0};
  int i, n;
  while (scanf("%d", &n) != EOF)
  {

    scanf("%[^\n]s", str);

    for (i = 0; i <= 2; i++)
    {

      if (i == 0)
      {
        if ((str[i] >= 'a' && str[i] <= 'z'))
          str[i] = str[i] - 32;
        continue;
      }
      if (str[i] == ' ')
      {

        ++i;
      }
      else
      {

        if (str[i] >= 'A' && str[i] <= 'Z')
          str[i] = str[i] + 32;
      }
    }

    printf("%s\n", str);
  }
  return 0;
}