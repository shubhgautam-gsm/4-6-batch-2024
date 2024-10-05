#include <stdio.h>


int main() {
  int a,b;
  printf("write first value ");
  scanf("%d",&a);
  
  printf("write Second value ");
  scanf("%d",&b);

  if (a > b) { 
    printf("%d is greater than %d",a,b);
  }  
  else{ // else print if 'if' condition is wrong 
    printf("%d is less than %d",a,b);
  }  
  return 0;
}