#include <stdio.h>
#include <math.h>

void nhap(int A[],int n);
void xuat(int A[],int n);
int timx(int A[],int n,int x);
void chenx(int A[],int n,int p);
void sapxep(int A[],int n);
int tongduong(int A[],int n);
int tongam(int A[],int n);
int sum(int A[],int n);



int main(){
	int n,i,dem,x,p;
	printf("moi nhap chieu dai mang: ");
	scanf("%d",&n);
	int A[n];
	nhap(A,n);
	xuat(A,n);
	printf("\nnhap gia tri x can tim ");
	scanf("%d",&x);
	dem=timx(A,n,x);
	if(dem!=0){
		printf("%d xuat hien %d lan",x,dem);
	}
	else {
		printf("khong co trong mang!!");
		printf("\nchen %d vao mang\n",x);xuat(A,n);
	}
		
	sapxep(A,n);
	printf("\nsap xep tang ");
    xuat(A, n);
	printf("\ntong duong la: %d",tongduong(A,n));
	printf("\ntong am la: %d",tongam(A,n));
	printf("\ntong la: %d",sum(A,n));


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
//
////tim x va dem so lam xuat hien

int timx(int A[],int n, int x){
	int i,dem=0;
	for(i=0;i<n;i++){
		if(A[i]==x){
		dem++;
		}
	}
	return dem;
}

//chem x

void chenx(int A[],int n, int x){
	int i,j,p=0;
	for(i=0;i<n;i++){
		if(A[i]>=x) p=i-1;
		for(j=n-1;j>=p;j--){
		A[j+1]=A[j];
		A[p]=x;
		n++;	
		}
		
	}
	
	
}

//xapxep

void sapxep(int A[],int n){
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

//tong so duong

int tongduong(int A[],int n){
	int i,duong=0;
	for(i =0;i<n;i++){
		if(A[i]>0){
			duong+=A[i];
		}
	}
	return duong;
}

//tong am

int tongam(int A[],int n){
	int i,am=0;
	for(i =0;i<n;i++){
		if(A[i]<0){
			am+=A[i];
		}
	}
	return am;
}

//sum

int sum(int A[],int n){
 int i, s=0;
 		s=tongam(A,n)+tongduong(A,n);
 	return s;
 }

