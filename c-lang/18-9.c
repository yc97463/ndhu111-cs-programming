#include <stdio.h>

int main()
{
  int a[10000];
  int s = 0;
  int arr[100];
  int tmp;
  int binary = 1;
  while (1)
  {
    scanf("%d", &tmp);
    if (tmp == 0 || tmp == 1)
    {
      arr[s] = tmp;
      s += 1;
      binary *= 2;
    }
    else
    {
      break;
    }
  }
  int sum = 0;

  for (int i = s - 1; i >= 0; i--)
  {
    printf("%d", arr[i]);
    binary /= 2;
    sum += arr[i] * binary;
  }
  printf("\n%d", sum);
}