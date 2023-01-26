#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
  int a, b, sum, c, d, e;
  if (argc == 1)
    printf("0\n");
  for (a = 1; a < argc; a++)
  {
    c = strlen(argv[a]);
    for (b = 0; b < c; b++)
    {
      if (argv[a][b] > '9' || argv[a][b] < '0')
      {
        printf("%s\n", "Error");
        return (1);
      }
    }
  }
  for (e = 1; e < argc; e++)
  {
    d = atoi(argv[e]);
    sum += d;
  }
printf("%d\n", sum);
return (0);
}
