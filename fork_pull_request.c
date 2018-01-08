#include <stdio.h>

int main()
{
  int i,j;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 9; j++) {
      printf("%dx%d=%d ", i+1, j+1, (i+1) * (j+1));
    }
  }
  
  return 0;
}

// comment
