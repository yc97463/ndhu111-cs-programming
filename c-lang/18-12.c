#include <stdio.h>

int main()
{
  int start[3];
  int end[3];
  scanf("%d %d %d", &start);
  scanf("%d %d %d", &end);

  int days = 0;
  // count year
  days += 365 * (end - start);

  // count month

  return 0;
}