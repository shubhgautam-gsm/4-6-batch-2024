#include <stdio.h>
#include <string.h>

// Function to handle user banking information
void bank_details(char bank[], char password[], char address[], int choice) {
    switch (choice) {
        case 1:
            printf("Bank: %s\n", bank);
            break;
        case 2:
            printf("Password: %s\n", password);
            break;
        case 3:
            printf("Address: %s\n", address);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }
}

int main() {
    char user_email[50], pass[50];
    int choice;

    printf("Enter username and password: ");
    scanf("%s %s", user_email, pass);
    
    if (strcmp(user_email, "jay14@gmail.com") == 0 && strcmp(pass, "ryzq") == 0) {
        printf("Choose detail to view: 1 for Bank, 2 for Password, 3 for Address: ");
        scanf("%d", &choice);
        bank_details("axis", "passw_1212", "jmg", choice);
    } else if (strcmp(user_email, "ram12@gmail.com") == 0 && strcmp(pass, "rmnw") == 0) {
        printf("Choose detail to view: 1 for Bank, 2 for Password, 3 for Address: ");
        scanf("%d", &choice);
        bank_details("axis", "passw_1212", "rjt", choice);
    } else if (strcmp(user_email, "meet55@gmail.com") == 0 && strcmp(pass, "abcf") == 0) {
        printf("Choose detail to view: 1 for Bank, 2 for Password, 3 for Address: ");
        scanf("%d", &choice);
        bank_details("kotak", "passw_1212", "jnd", choice);
    } else {
        printf("Invalid username or password\n");
    }

    return 0;
}
