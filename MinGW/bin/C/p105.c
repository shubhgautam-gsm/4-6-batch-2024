#include <stdio.h>

int main() {         
                      // 0             1
  int matrix[3][5] = { {1, 4, 2}, {3, 6, 8, 7 ,12}, {13, 6, 8, 7 ,12} };
  
  printf("%d", matrix[2][0]);
 
  return 0;
}

//         col0     col1            col2
// row0 // 1          4             2       {1,4,3}
// row1 // 3          6             8       {3,6,8}
 
 
// row1col1