#include <stdio.h>

int main()
{
  int i;
  int j; //not declared

  for (i = 0; i <= 5; i++) {
    for (j = 0; j <= 9; j++) {
      printf("%dx%d=%d \t", i, j, i * j);
    }
	printf("\n"); //line up to 1~5
  }
  
  return 0;
}

// comment
//before [i<4] -> after [i<=5]
//before [j<9] -> after [j<=9]
//add "\t"