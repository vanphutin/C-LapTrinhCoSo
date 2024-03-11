#include <stdio.h>

double tongDeQuy(int n);

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    double tong = tongDeQuy(n);
    printf("Tong la: %f", tong);
    return 0;
}
double tongDeQuy(int n) {
    if (n == 1) {
        return 1.0;
    } else {
        return 1.0/n + tongDeQuy(n-1);
    }
}

