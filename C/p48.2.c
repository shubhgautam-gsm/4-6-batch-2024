#include <stdio.h>
#include <string.h>
int main() {
  char dulha[10] = "serious";
  char dulhan[10] ="majakiyo" ;
  
  printf("%d ", strcmp(dulha,dulhan) != 0); // returns 1 (true) because 5 is equal to 5
  return 0;
}