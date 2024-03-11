#include<stdio.h>


void nhap(int a[],int n);
void xuat(int a[],int n);
int main (){
	int n;
	printf("moi nhap vao so luong phan tu: ");
	scanf("%d",&n);
	int a[n];
	nhap(a,n);
	printf("mang vua nhap la: ");
	xuat(a,n);
}

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		printf("phan tu thu A[%d]",i);
//		scanf("%d",&a[i]);
		scanf("%d",a+i);	
	}
}

void xuat(int a[],int n){
	for(int i=0;i<n;i++){
//		printf("%d ",a[i]);
	printf("%p ",*(a+i));
	}
}
