#include <stdio.h>

int main(void)
{
  int i,j;
  for (i = 1; i < 5; i++) {
    for (j = 1; j < 9; j++) {
      printf("%dx%d=%d ", i, j, i * j);
    }
  }
  
  return 0;
}

// comment
