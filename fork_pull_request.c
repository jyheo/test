#include <stdio.h>

int main()
{
  int i,j;
  for (i = 1; i < 10; i++) {
    for (j = 1; j < 10; j++) {
      printf("%dx%d=%d \n", i, j, i * j);
    }
  }
  
  return 0;
}

// comment
// for문에서 i=0 을 i=1로 변경
// for문에서 i<5를 i<10으로 변경
// 두번째 for문에서 i=1로 변경
// 두번째 for문에서 i<9를 i<10으로 변경
