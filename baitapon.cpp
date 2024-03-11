#include <stdio.h>
#include <math.h>

void nhap(int a[],int n);
void xuat(int a[],int n);
void sapxep(int A[],int n);
void tongmang(int a[],int n);
int main(){
	int n,i,check;
	printf("moi nhap do rong mang ");
	scanf("%d",&n);
	int A[n];
	nhap(A,n);
	printf("mang vua nhap la: \n");
	xuat(A,n);
	sapxep(A,n);
	printf("\ntong la: \n");
		tongmang(A,n);
	
}

void nhap(int a[],int n){
	for(int i=0;i<n;i++){
		printf("phan tu tu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}

void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
//sap xep giam
void sapxep(int A[],int n){
	int tg=0;
	for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
		if(A[i]<A[j]){
			tg=A[i];
			A[i]=A[j];
			A[j]=tg;
		}
		}
		
	}
}
void tongmang(int a[],int n){
	int tong=0;
	for(int i=0;i<n;i++){
	tong+=a[i];		
	}
}
