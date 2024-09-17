#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    // An array storing different ages
    int ages[] = {20, 18, 3, 22, 26, 48, 70, 87};
  
    int length = sizeof(ages) / sizeof(ages[0]);

    printf("Initial array:\n");
    printArray(ages, length);

    // Bubble sort algorithm to sort the array
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (ages[j] > ages[j + 1]) {
                swap(&ages[j], &ages[j + 1]);
                printf("Array after swapping elements at index %d and %d:\n", j, j+1);
                printArray(ages, length);
            }
        }
    }

    printf("\nFinal sorted array:\n");
    printArray(ages, length);

    return 0;
}
