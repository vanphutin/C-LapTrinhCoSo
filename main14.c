#include <stdio.h>
void Nhap(int a[], int n){
    //dung vong lap for duyet tu vi tri index thu 0 cho den vi tri n - 1 
    for(int i = 0; i <= n - 1; i++){
        //nhap gia tri va gan vao tung phan tu a[i] cua mang
        printf("NHAP A[%d]: ",i);
        scanf("%d",&a[i]);
    }
}
int main(){
    //khai bao bien n
    int n;
    printf("NHAP VAO N PHAN TU: ");
    //nhap du lieu va gan vao bien int n
    scanf("%d",&n);
    //sau khi nhap n, khai bao mang int a[n] (mang nay co n phan tu)
    int a[n];
    //goi ham nhap va truyen vao mang a va so n
    Nhap(a,n);
}
