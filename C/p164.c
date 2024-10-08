#include <stdio.h>

int main() {
    FILE *fptr;


    fptr = fopen("fis1.txt", "r"); 

    fprintf(fptr, "sshhh.\n");



    printf("File created successfully.\n");

    return 0;
}
