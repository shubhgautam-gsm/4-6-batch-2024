#include <stdio.h>

// Define the functions that take 2 parameters 
float add(float val1, float val2) {
   return val1 + val2;
}

float sub(float val1, float val2) {
   return val1 - val2;
}

float mult(float val1, float val2) {
   return val1 * val2;
}

float divide(float val1, float val2) {
   return val1 / val2;
}

int main() {
    float val1, val2; 
    char user;

    printf("Write val1 and val2: \n");
    scanf("%f %f", &val1, &val2);
    getchar(); // To consume the newline character left in the buffer by previous scanf

    printf("Write sign '+' | '-' | '*' | '/': ");
    scanf("%c", &user);

    switch(user) {
        case '+':
            printf("The add is: %f\n", add(val1, val2));
            break;
        case '-':
            printf("The sub is: %f\n", sub(val1, val2));
            break;
        case '*':
            printf("The mult is: %f\n", mult(val1, val2));
            break;
        case '/':
            if(val2 != 0) {
                printf("The div is: %f\n", divide(val1, val2));
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
