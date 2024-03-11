//sap xep mang tang dan

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define A 100
void nhap(int a[],int &n);
void xuat(int a[],int n);
void sapxep(int a[],int n);
int main(){
	int a[A];
	int n; 
	nhap(a,n);
	printf("mang sau khi nhap la: \n");
	xuat(a,n);
	sapxep(a,n);
	printf("\nmang sau khi sap xep la: \n");
	xuat(a,n);
}
void nhap(int a[],int &n){
	do {
		printf("moi nhap so luong phan tu: ");
		scanf("%d", &n);
		if(n<=0||n>A){
			printf("nhap sai, vui long nhap lai ");
		}
	}while (n<=0||n>A);
	for(int i=0;i< n;i++){
		printf("phan tu thu a[%d]  ",i);
		scanf("%d", &a[i]);	
	}
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}
void sapxep(int a[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
