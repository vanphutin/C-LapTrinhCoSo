#include <stdio.h>

void nhap(int A[],int n,char c);
void xuat(int A[],int n);

int main(){
	int n,B[200],C[200];
	printf("moi nhap vao do rong mang: ");
	scanf("%d",&n);
	int A[n];
	nhap(A,n,c);
	printf("mang vua nhap la: \n");
	xuat(A,n);
} 

void nhap(int A[],int n,char c){
	for(int i=0;i<n;i++){
		printf("mang thu A[%d] %c",i,c);
		scanf("%d",&A[i]);
	} 
}

void xuat(int A[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",A[i]);
	}
}
