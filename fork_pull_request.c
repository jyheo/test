#include <stdio.h>

int maint(){
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 9; j++) {
      printf("%dx%d=%d ", i, j, i * j);
    }
  }
  
  return 0;
}

// comment 
