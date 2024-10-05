#include <stdio.h>
/*
    Arithmetic operators <--
*/

/*
+ 	Addition 	Adds together two values 	x + y 	
- 	Subtraction 	Subtracts one value from another 	x - y 	
* 	Multiplication 	Multiplies two values 	x * y 	
/ 	Division 	Divides one value by another 	x / y 	
% 	Modulus 	Returns the division remainder 	x % y 	
++ 	Increment 	Increases the value of a variable by 1 	++x 	
-- 	Decrement 	Decreases the value of a variable by 1 	--x
*/

#include <stdio.h>

int main() {
  int x = 5;  // Initialize x with 5
  int y = 3;  // Initialize y with 3

  // Print the result of addition with a description
  printf("ADD IS %d\n", x + y);  // Prints "ADD IS 8"

  // Print the result of subtraction with a description
  printf("SUBTRACTION IS %d\n", x - y);  // Prints "SUBTRACTION IS 2"

  // Print the result of multiplication with a description
  printf("MULTIPLICATION IS %d\n", x * y);  // Prints "MULTIPLICATION IS 15"

  // Print the result of division with a description
  printf("DIVISION IS %d\n", x / y);  // Prints "DIVISION IS 1" (integer division)

  // Print the result of modulus with a description
  printf("MODULUS IS %d\n", x % y);  // Prints "MODULUS IS 2"

  // Pre-increment x and print the result with a description
  printf("PRE-INCREMENTED X IS %d\n", ++x);  // Prints "PRE-INCREMENTED X IS 6"

 // Pre-Decrement x and print the result with a description
  printf("PRE-INCREMENTED X IS %d\n", --x);  // Prints "PRE-DECREMENTED X IS 6"
  return 0;
}
