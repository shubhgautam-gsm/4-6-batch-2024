#include <stdio.h>
#include <string.h>  // Include string.h for strcmp function

int main() {
  char usr[10] = "jay_12";
  char client[10];
  
  printf("Write your Instagram username: ");
  scanf("%9s", client);  // Use %9s to prevent buffer overflow (leaves space for the null terminator)

  // Compare the content of the strings
  if (strcmp(usr, client) == 0) {
    printf("Welcome %s\n", client);
  } else {
    printf("%s, you are not a valid user.\n", client);
  }

  return 0;
}
