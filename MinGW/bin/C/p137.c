#include <stdio.h>

// Define the body function that takes parameters
int body(int hath, int pag) {
    
    return hath + pag;
}

int main() {
    int hath, pag;
    printf("WRITE VAL OF HATH: ");
    scanf("%d", &hath);
    printf("WRITE VAL OF PAG: ");
    scanf("%d", &pag);

    printf("The organs is: %d\n", body(hath, pag));
    return 0;
}
