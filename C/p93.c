#include <stdio.h>

int main() {
  int i;
  
  for (i = 0; i < 10; i++) {
    if (i == 4) {
      continue; //jump over
    }
    printf("%d\n", i);
  }   
  
  return 0;
}


// #include <stdio.h>

// int main() {
//   int i;
  
//   for (i = 0; i < 10; i++) {
//     if (i == 4) {
//       break; //jump out
//     }
//     printf("%d\n", i);
//   }   
  
//   return 0;
// }

