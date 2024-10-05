#include <stdio.h>
// You should also note that &myAge is often called a "pointer". A pointer basically stores the memory address of a variable as its value. To print pointer values, we use the %p format specifier.
int main() {
  int myAge = 43;
  printf("%p", &myAge);
  return 0;
}

// a=5;
// b=5;
// strcmp(a,b);


// Note: The memory address is in hexadecimal form (0x..). You will probably not get the same result in your program, as this depends on where the variable is stored on your computer.