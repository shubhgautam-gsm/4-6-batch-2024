#include <stdio.h>

enum GAME {
  STONE,
  PAPER,
  SISS
};
  
int main() {
  // Create enum variables and assign values to them
  enum GAME Jay = PAPER;
  enum GAME Pradip = SISS;    
  
  if((Jay == STONE && Pradip == PAPER) || (Pradip == SISS && Jay == PAPER) || (Pradip == STONE && Jay == SISS)) {
    printf("PRADIP U WIN\n");
  } 
  else if((Jay == PAPER && Pradip == STONE) || (Jay == SISS && Pradip == PAPER) || (Jay == STONE && Pradip == SISS)) {
    printf("JAY U WIN\n");
  }     
  else {
    printf("IT'S A DRAW\n");
  }
  
  return 0;
}
