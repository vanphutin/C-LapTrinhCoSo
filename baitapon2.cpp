//tim min max trong mang so nguyen dung con tro

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define A 100
void nhap(int *a,int *n);
void xuat(int *a,int *n);
int timmax(int *a,int *n);
int timmin(int *a,int *n);
int main (){
	int a[A];
	int n;
	nhap(a,&n);
	printf("mang sau khi nhap la: ");
	xuat(a,&n); 
	int max = timmax(a,&n);
	int min = timmin(a,&n);
	if(max == min){
		printf("\nkhong tim thay min max!!");
		exit(1);
	}
	if(max){
		printf("\nmax = %d ",max);
	}
	if(min){
		printf("\nmin = %d ",min);
	}
}

void nhap(int *a,int *n){
	do {
		printf("moi nhap so luong phan tu: ");
		scanf("%d", n);
		if(*n<=0||*n>A){
			printf("nhap sai, vui long nhap lai ");
		}
	}while (*n<=0||*n>A);
	for(int i=0;i< *n;i++){
		printf("phan tu thu a[%d]  ",i);
		scanf("%d", &a[i]);	
	}
}
void xuat(int *a,int *n){
	for(int i=0;i<*n;i++){
		printf("%d ", a[i]);
	}
}
int timmax(int *a,int *n){
	int max = *a;
	for(int i=0;i<*n;i++){
		if(*(a+i)>max){
			max= *(a+i);
		}
	}return max;
}
int timmin(int *a,int *n){
	int min = *a;
	for(int i=0;i<*n;i++){
		if(*(a+i)<min){
			min= *(a+i);
		}
	}return min;
}
