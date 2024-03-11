
#include <stdio.h>
#include <string.h>
#define MAX 100
void nhap(int a[],int  *n);
void xuat(int a[],int n);
void xoa1phantu(int a[],int* n,int xoavitri);
int  xoavitriK(int a[], int* n,int xoavitri);
int main(){
	int n,xoavitri=0;
	int a[MAX];
	nhap(a,&n);
	printf("mang sau khi nhap: \n"); 
	xuat(a,n);
	xoavitri = xoavitriK(a,&n,xoavitri);
    xoa1phantu(a, &n, xoavitri);

    printf("mang sau khi xoa: \n");
    xuat(a, n);

}
void nhap(int a[],int *n){
	do{
		printf("moi nhap so luong phan tu: ");
		scanf("%d",n);
		if(*n<=0 || *n > MAX){
			printf("phan tu nhap sai, moi nhap lai!!  \n");
		}
	}while(*n <= 0|| *n > MAX); 
	for(int i=0;i<*n;i++){
		printf("phan tu thu a[%d] ",i);
		scanf("%d",&a[i]);
	}
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d  ",a[i]);
	}
}

void xoa1phantu(int a[],int* n,int xoavitri){
	for(int i=xoavitri;i < *n-1;i++){
		a[i]=a[i+1];
	}
	(*n)--;
}
int xoavitriK(int a[], int* n,int xoavitri){
	
	do{
		printf("\nnhap vao vi tri muon xoa: ");
		scanf("%d",&xoavitri);
		if(xoavitri<0 || xoavitri>*n){
			printf("\nvi tri xoa khong hop le!!,nhap lai  ");
		}
	}while(xoavitri<0 || xoavitri>*n);
	return xoavitri;
}
