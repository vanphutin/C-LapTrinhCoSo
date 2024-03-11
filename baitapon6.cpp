#include <stdio.h>
#include <ctype.h>
#include <string.h>

void xoaKiTuSo(char *str) {
    int len = strlen(str);
    int i, j;

    for (i = 0; i < len; i++) {
        if (isdigit(str[i])) {
            // Xóa k? t? s? b?ng cách d?i các k? t? bên ph?i trái qua
            for (j = i; j < len; j++) {
                str[j] = str[j + 1];
            }

            len--; // Gi?m ð? dài c?a chu?i ði 1
            i--; // Gi?m ch? s? i ð? ki?m tra l?i k? t? hi?n t?i.
        }
    }
}

int main() {
    char str[] = "vede4324ewfew34d3";

    printf("Chuoi truoc khi xoa cac ki tu so: %s\n", str);

    xoaKiTuSo(str);

    printf("Chuoi sau khi xoa cac ki tu so: %s\n", str);

    return 0;
}

