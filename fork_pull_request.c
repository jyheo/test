#include <stdio.h>

int main()
{
  int i,j;
  for (i = 1; i < 9; i++) {
    for (j = 1; j < 9; j++) {
      printf("%dx%d=%d ", i, j, i * j);
    }
  }
  
  return 0;
}

// comment
// 숫자를 바꿨습니다.
