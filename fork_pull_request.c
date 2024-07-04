#include <stdio.h>

int main() {
  int i, j;
  for (i = 2; i < 10; i++) {
    for (j = 1; j < 10; j++) {
      printf("%dx%d=%d ", i, j, i * j);
    }
    printf("\n");  // 각 단의 끝에 개행문자를 추가하여 구분
  }
  
  return 0;
}

// comment
