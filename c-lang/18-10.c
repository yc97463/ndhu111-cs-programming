#include <stdio.h>

int main()
{
  char chr[99999];
  int as[10];

  for (int i = 0; i < 99999; i++)
  {
    chr[i] = ' ';
  }
  for (int i = 0; i < 10; i++)
  {
    as[i] = 0;
  }
  scanf("%s", chr);

  int s = 0;
  while (1)
  {
    if (chr[s] == ' ')
    {
      break;
    }
    switch (chr[s])
    {
    case '0':
      as[0]++;
      break;
    case '1':
      as[1]++;
      break;
    case '2':
      as[2]++;
      break;
    case '3':
      as[3]++;
      break;
    case '4':
      as[4]++;
      break;
    case '5':
      as[5]++;
      break;
    case '6':
      as[6]++;
      break;
    case '7':
      as[7]++;
      break;
    case '8':
      as[8]++;
      break;
    case '9':
      as[9]++;
      break;
    }

    s += 1;
  }
  for (int i = 0; i <= 9; i++)
  {
    if (as[i] != 0)
    {

      printf("[%d] = %d\n", i, as[i]);
    }
  }
  return 0;
}