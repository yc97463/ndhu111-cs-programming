#include <stdio.h>

int main()
{
  int arr[] = {};
  int i = 0;
  while (1)
  {
    int a = 0;
    scanf("%d", &a);
    if (a == 0)
    {
      break;
    }
    arr[i] = a;
    i += 1;
  }
  int size = sizeof(arr) / sizeof(arr[0]);
  for (int i = 0; i <= size; i++)
  {
    printf("%d = ", arr[i]);
    int b = 2;
    while (1)
    {
      if (arr[i] % b == 0)
      {
        arr[i] /= b;
        printf("%d ", b);
        continue;
      }
      else
      {
        b += 1;
        continue;
      }
      if (arr[i] / 1 == 1)
      {
        break;
      }
    }
  }
  printf("\n");
  return 0;
}