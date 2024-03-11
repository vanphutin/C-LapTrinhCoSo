#include <stdio.h>
#include <string.h> 
void nhap(int A[],int n);
void xuat(int A[],int n);
int timMIN(int A[],int n);
int timMAX(int A[],int n);
int main(){
	int n;
	printf("moi nhap do rong mang: ");
	scanf("%d",&n);
	int A[n];
	nhap(A,n);
	printf("\nmang vua nhap la:\n");
	xuat(A,n);
	printf("\n MIN= %d",timMIN(A,n));
	printf("\n MAX= %d",timMAX(A,n));
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

int timMIN(int A[],int n){
	int min=A[0];
	for(int i=1;i<n;i++){
		if(min>A[i])
		min=A[i];
	}
	return min;
}
int timMAX(int A[],int n){
	int max=A[0];
	for(int i=1;i<n;i++){
		if(max<A[i])
		max=A[i];
	}
	return max;
}
