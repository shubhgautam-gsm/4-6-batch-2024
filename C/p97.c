#include <stdio.h>
//first
int main() {
  int myNumbers[] = {25, 75, 100};
  printf("%d\n", myNumbers[0]);
  printf("%d\n", myNumbers[1]);
  printf("%d\n", myNumbers[2]);
 
  return 0;
}

//second

#include <stdio.h>

int main() {
  int myNumbers[] = {25, 75, 100};
  
  for(int i=0;i<3;i++){
  printf("%d\n", myNumbers[i]);
  }
 
  return 0;
}


//third

#include <stdio.h>

int main() {
    long myNumbers[] = {25, 75, 100, 44, 55, 22, 33, 332, 22, 12};
    
    // Calculate the number of elements in the array
    int arrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);

    for (int i = 0; i < arrayLength; i++) {
        printf("%ld\n", myNumbers[i]);
    }
    
    return 0;
}
