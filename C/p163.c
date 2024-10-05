#include <stdio.h>

int main() {
    FILE *fptr;


    fptr = fopen("fis1.txt", "w"); 

    fprintf(fptr, "This is a sample text file created by a C program.\n");



    printf("File created successfully.\n");

    return 0;
}
