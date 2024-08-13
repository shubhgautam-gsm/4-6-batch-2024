#include <stdio.h>

int main() {
  float a, b, c;
  printf("Enter the value of a: ");
  scanf("%f", &a);  // The address of 'a' should be passed

  printf("Enter the value of b: ");
  scanf("%f", &b);  // The address of 'b' should be passed
  c = a + b;

  printf("The value of c is: %f\n", c);  // Use %d to print the value of c

  return 0;  // Use return 0 instead of getch()
}
