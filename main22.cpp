#include <stdio.h>

void nhap(int A[],int n);
void xuat(int A[],int n);
void sapxep(int A[],int n);
int timx(int A[],int n,int x);
int main(){
	int n,i,dem,x;
	printf("moi nhap so luong phan tu: ");
	scanf("%d",&n);
	int A[n];
	nhap(A,n);
	printf("mang ban nhap la:\n");
	xuat(A,n);
	sapxep(A,n);
	printf("\nmang sau khi sap xep\n");
	xuat(A,n);
	printf("\nnhap gia tri x can tim: ");
	scanf("%d",&x);
	dem=timx(A,n,x);
	if(dem!=0){
		printf("%d xuat hien %d lan",x,dem);
	}else{
	 printf("%d khong co trong mang!!",x);
	}
}

void nhap(int A[],int n){
	for(int i=0;i<n;i++){
	printf("phan tu thu A[%d] ",i);
	scanf("%d",&A[i]);
	}
}

void xuat(int A[],int n){

	for(int i=0;i<n;i++){
		printf("%d\t",A[i]);
	}
}

void sapxep(int A[],int n){
	int i,j,c;
//	for(i=0;i<n-1;i++){
//		for(j=i+1;j<n;j++)
//		
		
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(A[i]>A[j]){
			c=A[i];
			A[i]=A[j];
			A[j]=c;
			}
		
		}
	}
}

int timx(int A[],int n,int x){
	int dem=0;
	for(int i=0;i<n;i++){
		if(x==A[i]){
		dem++;
		}
	}
	return dem;
}
