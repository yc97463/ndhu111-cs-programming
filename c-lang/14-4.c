#include <stdio.h>
#include <string.h>

int main()
{
  char filename[99999];
  scanf("%s", filename);

  FILE *fp = fopen(filename, "w");

  char word[99999];
  while (1)
  {
    scanf("%s", word);
    if (strcmp(word, "quit") == 0)
    {
      fclose(fp);
      break;
    }
    fprintf(fp, "%s\n", word);
  }

  fp = fopen(filename, "r");

  while (fscanf(fp, "%s", word) == 1)
  {
    printf("%s ", word);
  }
  fclose(fp);

  return 0;
}
