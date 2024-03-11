#include <stdio.h>

void nhap(int A[],int n);
void xuat(int A[],int n);
int xoamangtaivitri(int A[1000],int &n,int vitri);
void xoamangtheogiatri(int A[1000],int &n);

int main(){
	int n;
	printf("moi nhap do rong mang: ");
	scanf("%d",&n);
	int A[n];
	nhap(A,n);
	printf("\nmang vua nhap la:\n");
	xuat(A,n);
	printf("\n");
	xoamangtheogiatri(A,n);
	printf("\n");
	xuat(A,n);
	
}

void nhap(int A[],int n){
	for(int i=0;i<n;i++){
		printf("phan tu thu A[%d]= ",i);
		scanf("%d",&A[i]);
	}
}

void xuat(int A[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",A[i]);
	}
}

int xoamangtaivitri(int A[],int &n,int vitri){
	for(int i=vitri;i<n-1;i++){
		A[i]=A[i+1];
	}
	n--;
}

void xoamangtheogiatri(int A[],int &n){
	int gt;
	printf("moi bann nhap vao vi tri muon xoa: ");
	scanf("%d",&gt);
	for(int i=0;i<n;i++){
		if(A[i]==gt){
			xoamangtaivitri(A,n,i);
		}
	}
}
