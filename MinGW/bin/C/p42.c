#include <stdio.h>
/*Good Practice Another thing about
 constant variables, is that it is 
 considered good practice to declare them with uppercase.*/
int main() {
  const int BIRTHYEAR = 1980;
  BIRTHYEAR=2022;
  printf("%d", BIRTHYEAR);
  return 0;
}