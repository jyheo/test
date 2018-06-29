#include <stdio.h>

int main()
{
  int i,j;
  for (i = 0; i < 9; i++) {
    for (j = 0; j < 5; j++) {
      printf("%dx%d=%2d ", j, i, i * j);
    }
	printf("\n");
  }
  
  return 0;
}

// comment
