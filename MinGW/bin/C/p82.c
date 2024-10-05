#include <stdio.h>

int main() {
  int dice = 1;
  
  while (dice <= 6) {
    if (dice < 6) {
      printf("move %d step \n",dice);
    } else {
      printf("cong you get esto your num is %d u get one more chance\n",dice);
    }
    dice = dice + 1;
  }

  return 0;
}