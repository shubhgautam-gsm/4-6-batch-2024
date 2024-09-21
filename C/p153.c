#include <stdio.h>
// 1 method
// int main() {
//   int myNumbers[5] = {10, 20, 30, 40, 50};  
//   printf("%d\n",myNumbers[0]);
//   printf("%d\n",myNumbers[1]);
//   printf("%d\n",myNumbers[2]);
//   printf("%d\n",myNumbers[3]);
//   printf("%d\n",myNumbers[4]);
// }

//2 method 
// int main() {
//   int myNumbers[5] = {10, 20, 30, 40, 50};  
//  for(int i=0;i<5;i++){
//      printf("%d\n",myNumbers[i]);
//  }
// }

//3 method

// void myFunction(int myNumbers[5]) {
//   for (int i = 0; i < 5; i++) {
//     printf("%d\n", myNumbers[i]);
//   }
// }

// int main() {
//   int myNumbers[5] = {10, 20, 30, 40, 50};
//   myFunction(myNumbers);
//   return 0;
// }

// method 4 when not created function then use for loops many times
// #include <stdio.h>



// int main() {
//  int mydresses[5] = {10, 40, 10, 50, 30};  
//  for(int i=0;i<5;i++){
//      printf("my dresses sell price is  %d\n",mydresses[i]);
//  }

//  printf("\n\n");
//  int myshirts[5] = {140, 220, 1110, 250, 330};  
//  for(int i=0;i<5;i++){
//      printf("my shirts sell price is  %d\n",myshirts[i]);
//  }

//  printf("\n\n");
//  int myjens[5] = {1404, 220, 1145, 5550, 3530};  
//  for(int i=0;i<5;i++){
//      printf("my shirts sell price is  %d\n",myjens[i]);
//  }
// }



// method 5 not need to create many times for loop create
// one time use multiple times
#include <stdio.h>
#include <string.h>

void garments(const char *name, int prices[], int size) {
    for(int i = 0; i < size; i++) {
        printf("Selling price of %s is %d\n", name, prices[i]);
    }
}

int main() { 
    char user_choice[20];
    printf("Choose dress | shirts | jeans: ");
    scanf("%s", user_choice);     

    if (strcmp(user_choice, "dress") == 0) {
        int dress[5] = {10, 40, 10, 50, 30};  
        garments("dress", dress, 5);
    } else if (strcmp(user_choice, "shirts") == 0) {
        int shirts[5] = {140, 220, 1110, 250, 330};  
        garments("shirts", shirts, 5);
    } else if (strcmp(user_choice, "jeans") == 0) {
        int jeans[5] = {1404, 220, 1145, 5550, 3530};  
        garments("jeans", jeans, 5);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
