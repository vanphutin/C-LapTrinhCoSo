#include <stdio.h>
void Nhap(int a[], int n){
    for(int i = 0; i <= n - 1; i++){
        printf("NHAP A[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
int main(){
    int n;
    printf("NHAP VAO N PHAN TU: ");
    scanf("%d",&n);
    int a[n];
    Nhap(a,n);
    printf("cac phan tu nhap la:",Nhap);
}
