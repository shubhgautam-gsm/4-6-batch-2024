// You learned from the Data Types chapter that an int type is usually 4 bytes,
// so from the example above, 4 x 5 (4 bytes x 5 elements) = 20 bytes.
#include <stdio.h>

int main() {
  int myNumbers[] = {10, 25, 50, 75, 100};
  printf("%lu", sizeof(myNumbers));
 
  return 0;
}