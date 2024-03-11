#include <stdio.h>


float findMax(float a, float b, float c) {
    float max = a;
    
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

int main() {
    float num1, num2, num3, maxNum;
    
    printf("nhap so thu nhat: ");
    scanf("%f", &num1);
    printf("Nhap so thu hai: ");
    scanf("%f", &num2);
    printf("Nhap so thu ba: ");
    scanf("%f", &num3);

    maxNum = findMax(num1, num2, num3);

    printf("so lon nhat la: %.2f", maxNum);
    
    return 0;
}

