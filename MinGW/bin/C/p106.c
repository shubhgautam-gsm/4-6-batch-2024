#include <stdio.h>

int main() {
  int matrix[2][5] = { {1, 4, 2, 9,12}, {3, 6, 8, 5,7} };

  int i, j;
  for (i = 0; i < 2; i++) {
    
    for (j = 0; j < 2; j++) {
      printf("%d\n", matrix[i][j]);
    }
    
  }
  
  return 0;
}