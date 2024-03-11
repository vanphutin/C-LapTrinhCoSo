#include<stdio.h>
#include<math.h>

void nhap(int A[],int n){
	for(int i=0;i<=n-1;i++){
		printf("phan tu so A[%d]: ",i);
		scanf("%d",&A[i]);
	}
}

void xuat(int A[],int n){
	printf("cac phan tu co trong mang la: \n");
	for(int i=0;i<=n-1;i++){
		printf("A[%d]= %d\n",i,A[i]);
	}
}

int tinh(int A[],int n){
	printf("tbc la: ");
	for(int i=0;i<=n-1;i++){
	int sum=0;
	sum=sum+A[i];
	}
}

int main() {
	int n;
	printf("moi nhap so luon phan tu: ");
	scanf("%d",&n);
	int A[n];
	nhap(A,n);
	xuat(A,n);
	tinh(A,n);
}
