#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LENGTH 100

void nhap(char *s);
void xuat(char *s);
void chuoiviethoa(char* c);

int main(){
    char fileName[MAX_LENGTH];
    char str[MAX_LENGTH];

    nhap(str);
    xuat(str);
    chuoiviethoa(str);
    xuat(str);

    printf("Nhap ten file de luu chuoi chuan hoa: ");
   
    return 0;
}

void nhap(char* s){
    printf("Nhap vao chuoi: ");
    fgets(s, MAX_LENGTH, stdin);

    if (s[strlen(s)-1] == '\n') {
        s[strlen(s)-1] = '\0';
    }
}

void xuat(char* s){
    printf("Chuoi sau khi nhap la: %s\n", s);
}

void chuoiviethoa(char* c){
    int i;
    int len = strlen(c);
    for(i = 0; i < len; i++){
        if (i == 0 || c[i-1] == ' ') {
            c[i] = toupper(c[i]);
        }
        else {
            c[i] = tolower(c[i]);
        }
    }

    printf("Chuoi sau khi chuan hoa: %s\n", c);
}

