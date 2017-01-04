#include <stdio.h>

void main()
{
  int i;
  for (i = 2; i < 5; i++) {
    for (j = 1; j < 10; j++) {
      printf("%dx%d=%d\n", i, j, i * j);
    }
  }
  
  return 0;
}

// comment
// i'm sorry i can't find why this isn't work
