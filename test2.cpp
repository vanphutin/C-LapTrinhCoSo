#include <stdio.h>
void nhap(int a[],int n);
void xuat(int a[],int n);
void xuat(int a[],int n);
int tinhtong(int a[]);
int main(){
	int n,tong;
	printf("moi nhap vao so luong phan tu: ");
	scanf("%d",&n);
	int a[n];
	nhap(a,n);
	printf("mang ban nhap la:  ");
	xuat(a,n);
	printf("tong la %d",tinhtong());
//	tong();
}
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++){
		printf("phan tu thu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}

void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}    
}
int tinhtong(int a[],int n){
	int i,tong=0;
	if(a[i]==0)
	return 0;
	else return tong+=a[i];
}
