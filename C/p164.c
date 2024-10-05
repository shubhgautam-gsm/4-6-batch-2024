#include <stdio.h>
#include <windows.h>

int main() {
    const char *filename = "fis1.txt";

    // Set the file attributes to read-only
    if (SetFileAttributes(filename, FILE_ATTRIBUTE_READONLY)) {
        printf("File '%s' is now read-only.\n", filename);
    } else {
        printf("Failed to set file attributes. Error: %d\n", GetLastError());
    }

    return 0;
}
