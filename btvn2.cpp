#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LENGTH 100

void chuanHoaChuoi(char *);

int main() {
    char fileName[MAX_LENGTH];
    char str[MAX_LENGTH];

    printf("Nhap ten file de doc chuoi : ");
    fgets(fileName, MAX_LENGTH, stdin);
    if (fileName[strlen(fileName) - 1] == '\n') {
        fileName[strlen(fileName) - 1] = '\0';
    }

    FILE *f = fopen(fileName, "r");
    if (f == NULL) {
        printf("Khong the mo file %s de doc\n", fileName);
        return 1;
    }

    fgets(str, MAX_LENGTH, f);
    fclose(f);

    // Chuan hoa chuoi
    chuanHoaChuoi(str);

    // Xuat chuoi chuan hoa len man hinh
    printf("Chuoi chuan hoa: %s\n", str);

    // Ghi chuoi chuan hoa vao file
    printf("Nhap ten file de luu chuoi chuan hoa: ");
    fgets(fileName, MAX_LENGTH, stdin);
    if (fileName[strlen(fileName) - 1] == '\n') {
        fileName[strlen(fileName) - 1] = '\0';
    }

    f = fopen(fileName, "w");
    if (f == NULL) {
        printf("Khong the mo file %s de ghi\n", fileName);
        return 1;
    }

    fprintf(f, "%s", str);
    fclose(f);
    printf("Da ghi chuoi chuan hoa vao file %s\n", fileName);

    return 0;
}

void chuanHoaChuoi(char *str) {
    int uppercaseNext = 1;
    for (int i = 0; i < strlen(str); i++) {
        if (isspace(str[i])) {
            uppercaseNext = 1;
        } else {
            if (uppercaseNext) {
                str[i] = toupper(str[i]);
                uppercaseNext = 0;
            } else {
                str[i] = tolower(str[i]);
            }
        }
    }
}


