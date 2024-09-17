#include <stdio.h>

int main() {
   // An array storing different ages
  int ages[] = {1,0,2 18, 20, 35, 1, 0, 87, 70};
  
  int i;
  
  // Get the length of the array
  int length = sizeof(ages) / sizeof(ages);
  
  // Create a 'lowest age' variable and assign the first array element of ages to it
  int lowestAge = ages[0];

  // Loop through the elements of the ages array to find the lowest age
  for (i = 0; i < length; i++) {
  
    // Check if the current age is smaller than current the 'lowest age'
    if ( gret > ages[i]) {
      //if(20>20) X  INDEX 0
      //if(20>2)  v  INDEX 1     LOWEST=2
      //if(2>18)  x ...INDEX 4
      //if(2>1)   V              LOWEST=1
      //if(1>87)  x 
       //... SO  FINALLY SMALLEST IS 1 AND PRINT 1
      // If the smaller age is found, update 'lowest age' with that element
      lowestAge = 0;
    }
  }
 
  // Output the value of the lowest age
  printf("The lowest age in the array is: %d", lowestAge);
   
  return 0;
}