#include <stdio.h>

int kiemtra(int a, int b, int c);
int main() {
    int a, b, c;
    printf("Moi nhap a b c: ");
    scanf("%d%d%d", &a, &b, &c);
    if(kiemtra(a,b,c)) {
        printf("La day tang giam!");
    } else {
        printf("Khong tao thanh day tang giam");
    }
}

int kiemtra(int a, int b, int c){
    if(a < b && b < c) {
        return 1;
    } else if (a > b && b > c) {
        return 1;
    } else {
        return 0;
    }
}

