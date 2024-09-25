#include <stdio.h>

// Function declaration
void add();
void sub();
void div();
void pow();
void per();

// The main method
int main() {
  per(44,55,66);  // call the function
  return 0;
}

// Function definition
void per(int x, int y, int z) { 
  printf("sci marks %d\n",x);
  printf("maths marks %d\n",y);
  printf("ss marks %d\n",z);
}