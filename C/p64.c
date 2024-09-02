
// Short Hand If...Else (Ternary Operator)

// There is also a short-hand if else, which is known as the ternary operator because it consists of three operands.
// It can be used to replace multiple lines of code with a single line. 
// It is often used to replace simple if else statements:

#include <stdio.h>

int main() {
  int time = 16;
  (time < 18) ? printf("Good day.") : printf("Good evening.");
  return 0;
}

// simple if else
// #include <stdio.h>

// int main() {
//   int time = 16;
//   if(time < 18) {
//       printf("Good day.");
//       }
//   else{ 
//       printf("Good evening.");
//   };
//   return 0;
// }