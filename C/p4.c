#include <stdio.h>

int main() {
  float a, b, c,d,e,f;
  printf("Enter the value of a: ");
  scanf("%f", &a);  // The address of 'a' should be passed

  printf("Enter the value of b: ");
  scanf("%f", &b);  // The address of 'b' should be passed
  c=a+b;
  d=a-b;
  e=a*b;
  f=a/b;

  printf("%f addtion is \n ", c);  // Use %d to print the value of c
  printf("%f sub is \n", d);  
  printf("%f multi \n", e);  
  printf("%f div is \n", f);  
      
  return 0;  // Use return 0 instead of getch()
}
