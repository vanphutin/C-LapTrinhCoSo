#include <stdio.h>
#include <string.h>

void nhap(char s[]);
void xuat(char s[]);
void demchu(char s[], int &demhoa, int &demthuong);

int main() {
    char s[1000];
    int demhoa = 0, demthuong = 0;
    nhap(s);
    xuat(s);
    demchu(s, demhoa, demthuong);
    printf("co %d chu hoa, %d chu thuong", demhoa, demthuong);
    return 0;
}

void nhap(char s[]) {
    printf("moi nhap chuoi: ");
    fgets(s, 1000, stdin);
    s[strcspn(s, "\n")] = '\0';
}

void xuat(char s[]) {
    printf("chuoi vua nhap la: %s\n", s);
}

void demchu(char s[], int &demhoa, int &demthuong) {
    int len = strlen(s);
    for(int i = 0; i < len; i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            demhoa++;
        } else if(s[i] >= 'a' && s[i] <= 'z') {
            demthuong++;
        }
    }
}

