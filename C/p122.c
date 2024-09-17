#include <stdio.h>

int main() {
  // Create an int and a char variable
  int myNum;
  char myChar;

  // Ask the user to type a number AND a character
  printf("Type a number AND a character and press enter: \n");

  // Get and save the number AND character the user types
  scanf("%d %c", &myNum, &myChar);

  // Print the number
  printf("Your number is: %d\n and character is  %c\n", myNum,myChar);

  // Print the character
//   printf("Your character is:", myChar);
  
  return 0;
}
