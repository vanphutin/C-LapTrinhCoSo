#include <stdio.h>
int n,m,k;
int A[1000];
void nhap(int A[],int &n);
void xuat(int A[],int n);
void themgiatricuoinang(int A[1000],int &n,int m);
void themgiatridaunang(int A[1000],int &n,int m);
void themvaovitriK(int A[1000],int &n,int m,int k);
int main(){
	nhap(A,n);
	xuat(A,n);
	printf("\n");
	themgiatricuoinang(A,n,m);
	printf("\n");
	xuat(A,n);
	printf("\n");
	themgiatridaunang(A,n,m);
	printf("\n");
	xuat(A,n);
	printf("\n");
	themvaovitriK(A,n,m,k);
	printf("\n");
	xuat(A,n);
}

void nhap(int A[1000],int &n){
	do {
		printf("moi nhap do rong mang: ");
		scanf("%d",&n);
		}while(n<1);
	for(int i=0;i<n;i++){
		printf("phan tu thu A[%d]= ",i);
		scanf("%d",&A[i]);
	}
}

void xuat(int A[1000],int n){
	printf("\nmang vua nhap la:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",A[i]);
	}
}


void themgiatricuoinang(int A[1000],int &,int m){
	printf("nhap vao gia tri can them: ");
	scanf("%d",&m);
	int size=sizeof(A)/sizeof(A[0]);
	if(n==size){
		printf("khong the them vao mang");
	}
	
	A[n]=m;
	n++;
}
void themgiatridaunang(int A[1000],int &n,int m){
	
	printf("nhap vao gia tri can them: ");
	scanf("%d",&m);
	int size=sizeof(A)/sizeof(A[0]);
	if(n==size){
		printf("khong the them vao mang");
	}
	
	n++;
	for(int i=n-1;i>0;i--){
		A[i]=A[i-1];
	}
	A[0]=m;
}

void themvaovitriK(int A[1000],int &n,int m,int k){
	int size=sizeof(A)/sizeof(A[0]);
	if(n==size){
		printf("khong the them vao mang");
	}
	n++;
	printf("moi nhap vao vi tri them K: ");
	scanf("%d",&k);
	for(int i=n-1;i>k;i--){
		A[i]=A[i-1];
	}
	
	
}
