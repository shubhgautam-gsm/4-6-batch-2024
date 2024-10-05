#include <stdio.h>
// પુનરાવર્તન repeat task again and again
int sum(int k);
// 10 + sum(9)
// 10 + ( 9 + sum(8) )
// 10 + ( 9 + ( 8 + sum(7) ) )
// ...
// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + sum(0)
// 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0 
int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if ( k > 0) {
    return k + sum(k-1);
  } else {
    return 0;
  }
}
//10 + 9 + 8...1


// without recursion
#include <stdio.h>

// int main() {
//   int k=10;
//   if (k > 0) {
//     k = k + (k - 1);
//     printf(" value of k is %d",k);
//   } else {
//     return 0;
//   }
  
// }



