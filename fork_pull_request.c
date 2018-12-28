#include <stdio.h>

int main()
{
  int i,j;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 9; j++) {
      printf("%d*%d=%d ", i, j, i * j);
    }
  }
  
  return 0;
}

// comment
