#include <stdio.h>
#include <math.h>

int snt(int n);

int main(){
    int n;
    printf("Nhap so n de liet ke cac so nguyen to: ");
    scanf("%d", &n);
    printf("Cac so nguyen to nho hon %d la: ", n);
    for(int i = 2; i < n; i++){
        if(snt(i) == 1){
            printf("%d ", i);
        }
    }
    return 0;
}

int snt(int n){
    if(n < 2){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    for(int i = 2; i <= sqrt((float)n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

