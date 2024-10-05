#include <stdio.h>

// Define the functions that take 2 parameters 
int add(int val1, int val2) {
   return val1 + val2;
}

int sub(int val1, int val2) {
   return val1 - val2;
}

int mult(int val1, int val2) {
   return val1 * val2;
}

int div(int val1, int val2) {
   return val1 / val2;
}

int main() {
    int val1 = 3, val2 = 6; // Example values, you can change or take input if needed
    char user = '+'; // Example user choice, you can change or take input if needed

    switch(user) {
        case '+':
            printf("The add is: %d\n", add(val1, val2));
            break;
        case '-':
            printf("The sub is: %d\n", sub(val1, val2));
            break;
        case '*':
            printf("The mult is: %d\n", mult(val1, val2));
            break;
        case '/':
            if(val2 != 0) {
                printf("The div is: %d\n", div(val1, val2));
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}








// #include <stdio.h>

// int main() {
// int val1 = 3, val2 = 6; // Example values, you can change or 
// char user ='+'; 

// if(user=='+'){
//  void add(int val1, int val2) {
//    int addi=val1 + val2;
//    printf("add is %d",addi);
//  }
//  add(val1,val2);
// }

// else if(user=='-'){
//   void sub(int val1, int val2) {
//    int subi=val1 - val2;
//      printf("sub is %d",subi);
//  }
//  sub(val1,val2);
// }

// else{
//       printf("invalid");
// }
//     return 0;
// }
