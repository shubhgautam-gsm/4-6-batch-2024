#include <stdio.h>

int main() {
  int a, b, c;
  printf("Enter the value of a: ");
  scanf("%d", &a);  // The address of 'a' should be passed

  printf("Enter the value of b: ");
  scanf("%d", &b);  // The address of 'b' should be passed
  c = a + b;

  printf("The value of c is: %d\n", c);  // Use %d to print the value of c

  return 0;  // Use return 0 instead of getch()
}
