#include <stdio.h>
#include <math.h>

//nhap mang

void nhap(int A[], int n){
	for(int i=0 ; i<=n-1 ; i++){
		printf("phan tu thu A[%d]= ", i);
		scanf("%d", &A[i]);
	}
}

//xuatmang

void xuat(int A[],int n){
	printf("\nso luong mang can xuat la: ");
	for(int i=0 ; i<=n-1 ; i++){
		printf("\nA[%d]= %d",i,A[i]);
	}
}

//huyphantu

void huy(int A[], int &n,int p){
	for(int i=p;i<=n-1;i++){
		A[i]=A[i+1];
		n--;
	}
}

//xoatrung

void xoatrung(int A[],int &n){
	for(int i=0;i<=n-1;i++){
		for(int j=i+1;j<=n-1;j++){
			if(A[i]==A[j]) huy(A,n,j);
		}
	}
}

int main (){
	int n;
	printf("moi nhap so luong mang: ");
	scanf("%d",&n);
	int A[n];
	nhap(A,n);
	xuat(A,n);
	xoatrung(A,n);
	
	xuat(A,n);
}
