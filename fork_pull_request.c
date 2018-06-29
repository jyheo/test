include <stdio.h>

int main()
{
  int i,j;
  for (i = 0; i < 31; i++) {
    for (j = 0; j < 9; j++) {
      print( j, i * j);
    }
  }
  
  return 0;
}

// comment
