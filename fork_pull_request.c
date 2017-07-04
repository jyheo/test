#include <stdio.h>

int main()
{
  int i;
  int j; //not declared

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 9; j++) {
      printf("%dx%d=%d ", i, j, i * j);
    }
	printf("\n"); //line up to 1~5
  }
  
  return 0;
}

// comment
