#include <stdio.h>
// if value of i is more than compare number then i-- 
// ex i=10 is greater than 5 doing i-- until i>=5 i is greater than eqaul to 5  
int main() {
  int i = 10;
  
  do{
    printf("%d\n", i);
    i--;
  }while (i>=5);
  
  return 0;
}