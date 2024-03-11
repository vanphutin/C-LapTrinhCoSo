#include<stdio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n)
{
    do
    {
        printf("\nnhap vao sl phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nso phan tu khong hop le");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

int snt(int n) {
    if (n < 2) {
        return 0;
    }
    int i;
    int squareRoot = (int) sqrt(n);
    for (i = 2; i <= squareRoot; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int tongsnt(int a[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(snt(a[i])){
            sum +=a[i]*a[i];
        }
    }
    return sum; 
}

int main(){
    int n;
    int a[MAX];
    nhap(a,n);
    xuat(a,n);
    printf("tong cac snt la: %d",tongsnt(a,n));
}

