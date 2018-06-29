#include <stdio.h>

int main()
{
  int i,j;
  for (i = 0; i < 5; i++) 
  {
    for (j = 0; j < 9; j++) 
    {
      printf("%d x %d = %d ", i, j, i * j);
    }
  }
  
  return 0;
}

// comment
// 코드에 문제는 크게 없다 생각하여 가독성만 수정하였
