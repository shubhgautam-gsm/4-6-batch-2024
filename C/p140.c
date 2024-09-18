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
    int val1=1,val2=1; // Example values, you can change or take input if needed
    char user = '+'; // Example user choice, you can change or take input if needed
    getchar(); 
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
