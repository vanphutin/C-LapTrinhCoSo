#include <stdio.h>
#include <math.h>

void nhap(int A[],int n);
void xuat(int A[],int n);
int sum(int A[],int n);
void sapxep(int A[],int n);

int main(){
	int n,i;
	printf("moi nhap chieu dai mang: ");
	scanf("%d",&n);
	int A[n];
	nhap(A,n);
	xuat(A,n);
	 printf("\nMang sap xep tang dan la: ");
    xuat(A, n);
	printf("\ntong la: %d",sum(A,n));
	
}

//nhap

void nhap(int A[],int n){
	for(int i=0;i<=n-1;i++){ 
		printf("phan tu so A[%d]: ",i);
		scanf("%d",&A[i]);
	}
}
//xuat

void xuat(int A[],int n){
	printf("\nmang vua nhap");
	for(int i=0;i<=n-1;i++){
		printf("\nA[%d]= %d",i,A[i]);
	}
	
}

//xapxep

void sapxep(int A[],int n){
	int c;
	for(int i=0;i<n-1;i++){
		for(int j = i + 1; j < n; j++)
		if (A[i]>A[j]){
			  c = A[i];
                A[i] = A[j];
                A[j] =c;    
		}
		}
	}


//sum

int sum(int A[],int n){
 int s=0;
 		for(int i=0;i<=n-1;i++){
 		s=A[i]+s;
 	}
 	return s;
 }

