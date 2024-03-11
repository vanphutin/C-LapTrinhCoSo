#include <stdio.h>
#include <math.h>

void nhap(int A[],int n);
void xuat(int A[],int n);
void sapxeptang(int A[],int n);

int timx(int A[],int n,int x);
int main(){
	int n,i,dem,x;
	printf("moi nhap chieu dai mang: ");
	scanf("%d",&n);
	int A[n];
	nhap(A,n);
	xuat(A,n);
	sapxeptang(A,n);
	printf("\nsap xep tang ");
	xuat(A,n);
	printf("\n moi nhap x");
	scanf("%d",&x);
	printf(
	)

}


//nhap

void nhap(int A[],int n){
	int i;
	for(i=0;i<n;i++){ 
		printf("phan tu so A[%d]: ",i);
		scanf("%d",&A[i]);
	}
}
////xuat

void xuat(int A[],int n){
	printf("mang vua nhap");
	int i;
	for( i=0;i<=n-1;i++){
		printf("\nA[%d]= %d",i,A[i]);
	}
	
}


//xapxeptang

void sapxeptang(int A[],int n){
	int j,c,i;
	for( i=0;i<n-1;i++){
		for( j = i + 1; j < n; j++)
		if (A[i]>A[j]){
			  c = A[i];
                A[i] = A[j];
                A[j] =c;    
		}
		}
	}


//timkiem

int timx(int A[],int n,int x){
	for(int i=0;i<n;i++){
		if(x==A[i])
		
	}
	return 1;
}
	
	
}

