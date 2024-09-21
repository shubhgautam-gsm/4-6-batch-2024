#include <stdio.h>
#include <string.h>

// Function to get the toppings for a pizza
char* ingredients(){   
    static char toppings[7][15] = {"oregano", "mozzarella", "ketchup", "olives", "corn", "capsicum", "paneer"};
    return (char*)toppings;
}

// Function to create a pizza based on user input
void create_pizza(char *type){
    char size[10];
    char toppings[100];
    
    printf("Enter the size of your pizza (small/medium/large): ");
    scanf("%s", size);
    
    if (strcmp(type, "italian") == 0) {
        strcpy(toppings, "mozzarella, olives, oregano");
    } else if (strcmp(type, "mexican") == 0) {
        strcpy(toppings, "corn, capsicum, paneer");
    } else if (strcmp(type, "margherita") == 0) {
        strcpy(toppings, "mozzarella, oregano");
    } else {
        printf("Unknown pizza type\n");
        return;
    }

    printf("Your %s %s pizza with %s toppings is ready.\n", size, type, toppings);
}

int main() {
    int choice;
    
    printf("Select the type of pizza:\n");
    printf("1. Italian Pizza\n");
    printf("2. Mexican Pizza\n");
    printf("3. Margherita Pizza\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            create_pizza("italian");
            break;
        case 2:
            create_pizza("mexican");
            break;
        case 3:
            create_pizza("margherita");
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
