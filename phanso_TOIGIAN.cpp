#include <stdio.h>
#include <ctype.h>

void count_chars(char* str) {
    int word_count = 0;
    int letter_count[26] = {0};
    int digit_count = 0;
    int space_count = 0;

    // Count words and characters
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            word_count++;
        } else {
            if (isalpha(str[i])) {
                letter_count[tolower(str[i]) - 'a']++;
            } else if (isdigit(str[i])) {
                digit_count++;
            }
        }

        if (isspace(str[i])) {
            space_count++;
        }
    }

    // Print results
    printf("Number of words: %d\n", word_count + 1);
    printf("Number of digits: %d\n", digit_count);
    printf("Number of spaces: %d\n", space_count);
    for (int i = 0; i < 26; i++) {
        if (letter_count[i] != 0) {
            printf("Number of '%c's: %d\n", 'a' + i, letter_count[i]);
        }
    }
}

int main() {
    char str[81];
    printf("Enter a string: ");
    fgets(str, 81, stdin);

    count_chars(str);

    return 0;
}

