#include <stdio.h>

int count_lines(char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return -1; // Return -1 to indicate file cannot be opened
    }
    int count = 0;
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            count++;
        }
    }
    fclose(file);
    return count;
}

int main(void) {
    char* filename = "bai2.txt";
    int count = count_lines(filename);
    if (count == -1) {
        printf("Error: could not open file %s\n", filename);
    } else {
        printf("The file %s has %d lines.\n", filename, count);
    }
    return 0;
}

