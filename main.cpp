#include <stdio.h>

int daonguocso(int number) {
    int a = 0;
    while (number != 0) { 
        int b = number % 10;
        a = a * 10 + b;
        number /= 10;
    }
    return a;
}

int main() {
	int n;
    printf("moi nhap so can dao nguoc: "); 
   scanf("%d",&n);
   printf("so dao nguoc la: %d",daonguocso(n));
    return 0;
}

