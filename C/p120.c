#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "Hello";
  char str2[] = "Hello";
  char str3[] = "Hi";

  // Compare str1 and str2, and print the result
  printf("str1 and str2 is equal so ans is %d\n", strcmp(str1, str2));
  
  // Compare str1 and str3, and print the result
  printf("str1 and str3 is not equal so ans is %d\n", strcmp(str1, str3));
  // Specifically, it returns the difference in ASCII values: 'e' - 'l' = 101 - 105 = -4.
  return 0;
}