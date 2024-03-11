#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

#define MAX_SIZE 100
#define FILE_NAME "songuyen.txt"

void nhapMang(int a[], int *n) {
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++) {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n) {
    printf("Mang: ");
    for (int i = 0; i < n; i++) {
        printf("%5d", a[i]);
    }
    printf("\n");
}

bool laSoNguyenTo(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void xoaPhanTu(int a[], int *n, int x, int k) {
    if (k < 0 || k >= *n) {
        printf("Vi tri k khong hop le\n");
        return;
    }
    for (int i = k; i < *n - 1; i++) {
        a[i] = a[i+1];
    }
    // Gi?m kích thý?c m?ng ði 1 ðõn v?
    *n -= 1;
    printf("Da xoa phan tu %d vi tri %d\n", x, k);
}

void xoaSoNguyenTo(int a[], int *n) {
    for (int i = 0; i < *n; i++) {
        if (laSoNguyenTo(a[i])) {
            xoaPhanTu(a, n, a[i], i);
            i--; 
        }
    }
    printf("Da xoa cac so nguyen to khoi mang\n");
}

void ghiMangXuongFile(int a[], int n) {
    FILE *f;
    f = fopen(FILE_NAME, "wt");
    if (f == NULL) {
        printf("Khong the mo file %s\n", FILE_NAME);
        return;
    }
    for (int i = 0; i < n; i++) {
        fprintf(f, "%d\n", a[i]);
    }
    printf("Ghi mang xuong file thanh cong\n");
    fclose(f);
}

int main() {
    int a[MAX_SIZE], n, x, k;
    
    nhapMang(a, &n);
    
    xuatMang(a, n);
    
    printf("Nhap gia tri phan tu muon xoa: ");
    scanf("%d", &x);
    printf("Nhap vi tri phan tu muon xoa: ");
    scanf("%d", &k);
    xoaPhanTu(a, &n, x, k);
    xuatMang(a, n);

    xoaSoNguyenTo(a, &n);
    xuatMang(a, n);
    
    ghiMangXuongFile(a, n);
    
    return 0;
}

