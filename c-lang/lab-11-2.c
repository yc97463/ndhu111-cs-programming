#include <stdio.h>
#include <string.h>

// TEMPLATE BEGIN
char *trim(char *dest)
{
  size_t len = strlen(dest);
  if (len == 0)
  {
    return dest;
  }

  char *start = dest;
  char *end = dest + len - 1;

  while (start < end && (*start == '\n' || *start == '\t' || *start == ' '))
  {
    start++;
  }
  while (end > start && (*end == '\n' || *end == '\t' || *end == ' '))
  {
    end--;
  }

  *(end + 1) = '\0';
  return start;
}
// TEMPLATE END

int main()
{
  char s[100];
  char line[50];
  while (gets(line))
  {
    strcat(s, line);
  }
  printf("%s", trim(s));
  return 0;
}