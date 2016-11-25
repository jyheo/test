#include <stdio.h>

int main()
{
  int i;
  int j;
  for (i = 2; i < 10; i++) {
    for (j = 1; j < 10; j++) {
      printf("number : %d\n", i);
      printf("%dx%d=%d\n", i, j, i * j);
    }
  }
  
  return 0;
}
