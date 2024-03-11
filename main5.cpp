#include<stdio.h>
#include<math.h>

void nhap(int A[], int n){
	for( int i=0;i<=n-1;i++){
		printf("nhap phan tu so A[%d]: ",i);
		scanf("%d",&A[n]);
	}
}

void xuat(int A[],int n){
	for(int i;i<=n-1;i++){
		printf("A[%d]= %d\n",i,A[i]);

	}	
}



int main () {
	int n;
	printf("moi nhap  so luong phan tu: ");
	scanf("%d",&n);
	int A[n];
	nhap(A,n);
	xuat(A,n);

}

