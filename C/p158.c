#include <stdio.h>

// Function declaration
//model 
void add();
void sub();
void divi();
void powi();
float per();

// The main method
int main() {
  float jay=per(44,55,66);
  float meet=per(66,77,99);
  printf("%f per of jay ",jay);// call the function
  return 0;
}

// Function definition
float per(int x, int y, int z) { 
 return (x + y + z)/3;
}