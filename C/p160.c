#include <stdio.h>
#include <string.h>

// Function declaration
// if not create model and initialize model parameters chances to fail create proper app 
// void book();

// // The main method
// int main() {
//   book("TRUE_STORY","motivational", 500);  // call the function
//   return 0;  // indicate that the program ended successfully
// }

// // Function definition
// void book(char bookname[],char des[], int price) {
//   printf("book=%s description=%s price=%d\n",bookname,des, price);  // added \n for a new line
// }

//second 
void book(char bookname[], char des[], int price);

int main() {
  book("TRUE_STORY","motivational", 500);  // call the function
  return 0;  // indicate that the program ended successfully
}

void book(char bookname[],char des[], int price) {
  printf("book=%s description=%s price=%d\n",bookname,des, price);  // added \n for a new line
}











// if(admin && pass){
//     home("./home.html");
//     insert("./insert.html")
//     update("./delete.html")    
// }
// else{
//     login("./login.html")
// }