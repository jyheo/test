#include <stdio.h>

int main()
{
  int i;
  int j;
  for (i = 0; i < 10; i++) {
  	printf("\n ----%d´Ü---- \n",i);
    for (j = 0; j < 10; j++) {
      printf("%dx%d=%d \n", i, j, i * j);
    }
  }
  
  return 0;
}

// comment
