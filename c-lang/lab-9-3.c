#include <stdio.h>
#define MAX 100

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);

  int z[MAX][MAX];
  int i, j, k;
  for (i = 0; i < a; i++)
  {
    for (j = 0; j < b; j++)
    {
      scanf("%d", &z[i][j]);
    }
  }
  // Input arr End
  int start = 0;
  int up = 0, down = a - 1, left = 0, right = b - 1;

  while (1)
  {
    // 左上到右上
    for (i = 0; i <= right; i++)
    {
      printf("%d ", z[up][i]);
    }
    up += 1;
    if (up > down)
    {
      break;
    }

    // 右上到右下
    for (i = up; i <= down; i++)
    {
      printf("%d ", z[i][right]);
    }
    right -= 1;
    if (right < left)
    {
      break;
    }

    // 右下到左下
    for (i = right; i >= left; i--)
    {
      printf("%d ", z[down][i]);
    }
    down -= 1;
    if (down < up)
    {
      break;
    }

    // 左下到左上
    for (i = down; i > up; i--)
    {
      printf("%d ", z[i][left]);
    }
    left += 1;
    if (left > right)
    {
      break;
    }
  }
}