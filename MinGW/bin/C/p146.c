#include <stdio.h>

void insta_user(char name[], int age) {
  printf("Hello %s. You are %d years old\n", name, age);
}

int main() {
  insta_user("Liam", 3);
  insta_user("Jenny", 14);
  insta_user("Anja", 30);
  return 0;
}