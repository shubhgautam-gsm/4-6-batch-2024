#include <stdio.h>

int main() {
  float margerita = 500;
  float client = 120;

  if (client >= margerita) {
    printf("take your pizza");
  } else {
    printf("not able to buy pizza you have ₹%.2f but pizza price is %.2f " ,client,margerita);
 }
  
  return 0;
}