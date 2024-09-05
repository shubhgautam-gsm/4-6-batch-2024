#include <stdio.h>

int main() {
  // Declare an array of four integers:
  int myNumbers[10];

  // Add elements to it
  myNumbers[0] = 25;
  myNumbers[1] = 50;
  myNumbers[2] = 75;
  myNumbers[3] = 100;
  myNumbers[4] = 10;
  myNumbers[5] = 10;
  myNumbers[6] = 10;
  
for(int i=0;i<=5;i++){ 
  printf("%d\n", myNumbers[i]);
}
  return 0;
}