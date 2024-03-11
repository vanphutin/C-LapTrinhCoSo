#include <stdio.h>
#include <math.h>

void nhap(int A[],int n){
	for(int i=0;i<n;i++){
		printf("phan tu thu A[%d]: ",i);
		scanf("%d",&A[i]);
	}
}

void xuat(int A[],int n){
	
	for(int i=0;i<n;i++){
		printf("%d\t",A[i]);
	}
}

void sapxep(int A[],int n){
	int tg;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(A[i]>A[j]){
				tg=A[i];
				A[i]=A[j];
				A[j]=tg;
			}
		}
	}
}

int tim(int A[],int n,int x){
	int cc=0;
	for(int i=0;i<n;i++){
		if(A[i]==x){
		cc ++;	
		}
	}
	return cc;
}

int main(){
	int n,x,dem;
	printf("moi nhap vao do rong mang: ");
	scanf("%d",&n);
	int A[n];
	nhap(A,n);
	printf("mang vua nhap la: ");
	xuat(A,n);
	sapxep(A,n);
	printf("\nmang sau khi sap xep la: \n");
	xuat(A,n);
		printf("\nnhap gia tri x can tim: ");
	scanf("%d",&x);
	dem=tim(A,n,x);
	if(dem!=0){
		printf("%d xuat hien %d lan",x,dem);
	}else{
	 printf("%d khong co trong mang!!",x);
	}
}

