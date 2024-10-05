#include <stdio.h>

int main() {
  int myAge=5;  // An int variable
  int ptr=myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

  // Output the value of myAge (43)
  printf("%d\n", myAge);
  printf("%d\n", ptr);
  // Output the memory address of myAge (0x7ffe5367e044)
  printf("%p\n", &myAge);
  printf("%p\n", &ptr);

  // Output the memory address of myAge with the pointer (0x7ffe5367e044)
  printf("%p\n", ptr);

  return 0;
}