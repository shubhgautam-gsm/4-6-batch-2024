#include <stdio.h>
#include <string.h>

int main() {
    char original_password[] = "acb";
    char *password_list[] = {"abc", "bca", "acb", "bac"};
    int i;
    int found = 0; // To track if the password is found
    int tries = 0; // To count the number of tries

    for(i = 0; i < 4; i++) { // Loop through the password list
        tries++; // Increment the tries counter
        if(strcmp(original_password, password_list[i]) == 0) {
            found = 1; // Password found
            break;
        }
    }

    if(found) {
        printf("Password found: %s\n", password_list[i]);
        printf("Number of tries: %d\n", tries);
    } else {
        printf("Password not found.\n");
    }

    return 0;
}
