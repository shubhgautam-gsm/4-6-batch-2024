#include <stdio.h>

// Declare the functions
void myAnimals();
void myBirds();
void dog();
void cat();
void baghadbila();
void parrot();
void sparrow();
void eagle();

int main() {
  myAnimals(); // call myAnimals (from main)
  myBirds();
  return 0;
}

// Define myAnimals
void myAnimals() {
  printf("Some Animals are\n");
  dog();
  cat();
  baghadbila();

}
void myBirds(){
  printf("Some Birds are\n");
  parrot();
  sparrow();
  eagle();
}// Define the other functions
void dog() {
  printf("I am dog\n");
}

void cat() {
  printf("I am cat\n");
}

void baghadbila() {
  printf("I am baghadbila\n");
}

void parrot() {
  printf("I am parrot\n");
}

void sparrow() {
  printf("I am sparrow\n");
}

void eagle() {
  printf("I am eagle\n");
}


