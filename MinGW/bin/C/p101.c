//  size of array is 20 because each int occupy 4 bytes so 4* 5 =20 bytes so opposite
//give size of array
#include <stdio.h>

int main() {
  int myNumbers[] = {10, 25, 50, 75, 100};
  int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
  
  printf("%d", length);
  return 0;
}