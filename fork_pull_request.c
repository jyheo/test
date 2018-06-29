#include <stdio.h>

int main()
{
  int i,j;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 9; j++) {
      printf("%dx%d=%d \t", i, j, i * j);
    }
    printf("\n");
  }
  
  return 0;
}

// comment
