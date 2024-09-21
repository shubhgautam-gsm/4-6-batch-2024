#include <stdio.h>


void garments(int user_choice){
for(int i=0;i<5;i++){
 printf(user_choice,"selling price is  %d\n",mydresses[i]);
 }
}


int main() { 
 char user_choice[20];
 printf("choose dress | shirts | jens");
 scanf("%s",&user_choice);     
 switch:(user_choice){

 case "dress":
       int dress[5] = {10, 40, 10, 50, 30};  
        garments(dress, 5);
}
 
 
 

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