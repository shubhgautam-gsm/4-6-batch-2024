#include <stdio.h>

int main() {
  int i,j,k;

  for (i = 1; i < 5; i++) {
    
  for (j = 0; j < i; j++) {
    printf("%d", j);
  }
  for (k = 5; k > i; k--) {
    printf("*");
  }
  
  printf("\n");
  }
  
  return 0;
}