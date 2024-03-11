#include <stdio.h>
#include <string.h>
#include <ctype.h>

void menu();
void ucln_bscnn();
void snt();
void xoa_phantu();
void nhap_xuat_chuoi();
void chuanhoa_ten();

int find_gcd(int a, int b);
int find_lcm(int a, int b);
int is_prime(int n);
void xoa_phantu_x(int a[], int *n, int x);
void chuanhoa_ten(char s[]);

int main() {
    menu();
    return 0;
}

void menu() {
    int choice;

    do {
        printf("\nMENU\n");
        printf("1.Tim UCLN va BCNN\n");
        printf("2.Tim so nguyen to\n");
        printf("3.Tim va xoa phan tu trong mang\n");
        printf("4.Nhap va xuat chuoi\n");
        printf("5.Chuan hoa ten nguoi dung\n");
        printf("0.Thoat\n");
        printf("Moi ban chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                ucln_bscnn();
                break;
            case 2:
                snt();
                break;
            case 3:
                xoa_phantu();
                break;
            case 4:
                nhap_xuat_chuoi();
                break;
            case 5:
                chuanhoa_ten();
                break;
            case 0:
                printf("Hen gap lai!");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);

}

void ucln_bscnn() {
    int a, b, ucln, bscnn;

    printf("Nhap vao 2 so nguyen duong: ");
    scanf("%d %d", &a, &b);

    ucln = find_gcd(a, b);
    bscnn = find_lcm(a, b);

    printf("Uoc chung lon nhat: %d\n", ucln);
    printf("Boi chung nho nhat: %d\n", bscnn);

}

void snt() {
    int n;

    printf("Nhap vao mot so nguyen duong: ");
    scanf("%d", &n);

    if (is_prime(n))
        printf("%d la so nguyen to.\n", n);
    else
        printf("%d khong phai la so nguyen to.\n", n);

}

void xoa_phantu() {
    int a[100], n, x, i;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Nhap gia tri can xoa: ");
    scanf("%d", &x);

    xoa_phantu_x(a, &n, x);

    printf("Mang sau khi xoa la: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

}

void nhap_xuat_chuoi() {
    char s[100];

    printf("Nhap vao mot chuoi: ");
    scanf("%s", s);

    printf("Chuoi vua nhap: %s\n", s);
}

void chuanhoa_ten() {
    char name[50];

    printf("Nhap ten cua ban: ");
    scanf("%s", name);

    chuanhoa_ten(name);

    printf("Ten cua ban sau khi chuan hoa: %s\n", name);
}

int find_gcd(int a, int b) {
    if (a == 0 || b == 0)
        return a + b;
    return find_gcd(b, a % b);
}

int find_lcm(int a, int b) {
    return (a * b) / find_gcd(a, b);
}

int is_prime(int n) {
    if (n < 2)
        return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void xoa_phantu_x(int a[], int *n, int x) {
    int i, j;

    for (i = j = 0; i < *n; i++) {
        if (a[i] != x) {
            a[j++] = a[i];
        }
    }

    *n = j;
}

void chuanhoa_ten(char s[]) {
    int i, j, len;

    len = strlen(s);
    s[0] = toupper(s[0]);

    for (i = 1; i < len; i++) {
        if (s[i] == ' ') { 
            s[i + 1] = toupper(s[i + 1]); 
            continue;
        }
        s[i] = tolower(s[i]); 
    }
}

