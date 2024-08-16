#include <stdio.h>

int main() {
  float a, b,add,sub,multi,divi;
  printf("Enter the value of a: ");
  scanf("%f", &a);  // The address of 'a' should be passed

  printf("Enter the value of b: ");
  scanf("%f", &b);  // The address of 'b' should be passed
  add=a+b;
  sub=a-b;
  multi=a*b;
  divi=a/b;


  char user;
  printf(" write add | sub | multi | divi");
  scanf("%c", &user); 
  if(user=='add'){
     printf("%f addtion is \n ", add);    
  }
  else if(user=='sub'){
    printf("%f sub is \n", sub);   
  }
  else if(user=='multi'){
     printf("%f multi \n", multi);    
  }
  else if{
    printf("%f div is \n", divi);   
  }
  else{
    printf("Wrong input \n");  // If user input is not valid operation
  }
      
  return 0;  // Use return 0 instead of getch()
}
