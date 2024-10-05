#include <stdio.h>

int main() {
  int x = 5;
  int y = 3;
  
  // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
  printf("x is %d y is %d\n",x,y);
  printf("x > 3 && x < 5 true=1,false=0 ans is %d\n", x > 3 && x < 5);
  printf("x > 3 || x < 5 true=1,false=0 ans is %d", x > 3 || x < 5);
  return 0;
}