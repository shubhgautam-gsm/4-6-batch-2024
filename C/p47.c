#include <stdio.h>

int main() {
    int x = 12;  // Binary: 1100
    int y = 5;   // Binary: 0101
    
    // Perform all operations in sequence
    x |= y;      // x = x | y => 1100 | 0101 = 1101 (13 in decimal)
    x ^= y;      // x = x ^ y => 1101 ^ 0101 = 1000 (8 in decimal)
    x >>= 2;     // x = x >> 2 => 1000 >> 2 = 0010 (2 in decimal)
    x <<= 3;     // x = x << 3 => 0010 << 3 = 10000 (16 in decimal)
    
    // Print the final result
    printf("Final value of x is %d\n", x);  // Prints "Final value of x is 16"
    
    return 0;
}
