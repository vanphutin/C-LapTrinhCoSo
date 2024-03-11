#include <stdio.h>
#include <string.h>

int main() {
    char str[100], longest[100];
    int i, len = 0, max_len = 0;

    printf("moi nhap : ");
    gets(str);

    char *tu = strtok(str, " "); 

    while (tu != NULL) {
        len = strlen(tu);
        if (len > max_len) { 
            max_len = len;
            strcpy(longest, tu);
        }
        tu = strtok(NULL, " ");
    }

    printf("The longest word in the sentence is: %s", longest);

    return 0;
}

