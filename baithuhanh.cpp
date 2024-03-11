#include <stdio.h>

void nhap(int a[],int n);
void xuat(int a[],int n);
int  dem(int a[],int n);
void thayso(int a[],int n);
int main(){
	int n;
	printf("moi nhap so luong phan tu: ");
	scanf("%d",&n);
	int a[n];
	nhap(a,n);
	printf("mang vua nhap la: \n");
	xuat(a,n);
	if(dem(a,n)==0){
		printf("\nkhong co so nao chia het cho 5 va tan cung la 0!!");
	}else printf("\ncac so chia het cho 5 va tan cung 0 la %d",dem(a,n));
	printf("\n");
	thayso(a,n);
	printf("ca phan tu sau khi thay la: \n");
	xuat(a,n);	
}

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		printf("phan tu thu A[%d] ",i);
		scanf("%d",&a[i]);
	}
}

void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

int  dem(int a[],int n){
	int dem=0;
	for(int i=0;i<n;i++){
		if(a[i]%5==0 && a[i]%10==0){
			dem++;
		}
	}return dem;

}

void thayso(int a[],int n){
	int thayso;
	for(int i=0;i<n;i++){
		if(a[i]%2!=0){
			a[i] *=2;
		}
}
}
