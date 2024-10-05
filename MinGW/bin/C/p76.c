#include <stdio.h>
// if value of i is less than compare number then i++
int main() {
  int i = 3;
  
  do{
    printf("%d\n", i);
    i++;
  }while (i<=5);
  
  return 0;
}