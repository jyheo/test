#include <stdio.h>

int main()
{
  int i;
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 9; j++) {
      printf("%dx%d=%d ", i, j, i * j);
    }
  }
  printf("good");
  
  return 0;
}

// comment
