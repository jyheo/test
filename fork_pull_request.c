#include <stdio.h>

int main()
{
  int i;
  for (i = 1; i < 10; i++) {
    for (j = 1; j < 10; j++) {
      printf("%dx%d=%d ", i, j, i * j);
    }
  }
  
  return 0;
}
