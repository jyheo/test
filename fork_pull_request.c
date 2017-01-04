#include <stdio.h>

int main()
{
  int i;
  for (i = 2; i <=9; i++) {
    for (j = 1; j <= 9; j++) {
      printf("%dx%d=%d ", i, j, i * j);
    }
  }
  
  return 0;
}

// 구구단 숫자 변경
