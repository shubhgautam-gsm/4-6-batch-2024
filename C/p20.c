#include <stdio.h>
#include <string.h>

int main()
{
    char usercolor[10];  // Allocate enough space for the input string
    printf("Select mode (light or dark): ");
    scanf("%s", usercolor);  // Read a string input

    // Copy the usercolor string to jay and vijay
    char jay[10], vijay[10];
    strcpy(jay, usercolor);
    strcpy(vijay, usercolor);

    printf("Jay's screen mode is: %s\n", jay);
    printf("Vijay's screen mode is: %s\n", vijay);

    return 0;
}
