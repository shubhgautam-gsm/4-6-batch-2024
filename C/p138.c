#include <stdio.h>


int main() {
    int val1,val2;
    
    // printf("Enter two integers: ");
    // scanf("%d %d", &val1, &val2);

// Define the body function that takes 2 parameters 
    int add(int val1,int val2) {
       return val1 + val2;
    }
    int sub(int val1,int val2) {
       return val1 + val2;
    }
    int mult(int val1,int val2) {
        return val1 + val2;
    }
    int div(int val1,int val2) {
        return val1 + val2;
    }
    chr user=2;
    add=1;
    sub=2;
    div=3;
    if(strcmp(user,add)==0){
      printf("The add is: %d\n", add(3, 6));
    }
    else if(strcmp(user,sub)==0){
      printf("The sub is: %d\n", mult(3, 6));
    }

    else if(strcmp(user,div)==0){
      printf("The div is: %d\n", div(3, 6));
    }
    return 0;
}
