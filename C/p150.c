#include <stdio.h>
int add(int val1, int val2) {
   return val1 + val2;
}
int sub(int val1, int val2) {
   return val1 - val2;
}
int mult(int val1, int val2) {
   return val1 * val2;
}
int divi(int val1, int val2) {
   return val1 / val2;
}


int main() {
 int  val1=2,val2=3;
  printf("multi is %d \n",mult(val1,val2));
  printf("div is %d \n",divi(val1,val2));
  printf("add is %d \n",add(val1,val2));
  printf("sub is %d \n",sub(val1,val2));

}
// using above only changes made at val1,val2 not need to change in all func
// using below --> i want to do calc for all functions of 2,3  then changes to be made in all func
//   printf("multi is %d \n",mult(6,5));
//   printf("div is %d \n",divi(6,5));
//   printf("add is %d \n",add(6,5));