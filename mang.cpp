#include <stdio.h>
#define MAX 100

void nhap(int A[],int *n);
void xuat(int A[],int n);
//float tinhtrungbinhcong(int A[],int n);
//float trungbinhcongsoduong(int A,int n);
int main(){
	int n;
	int A[n];
	nhap(A,&n);
	printf("\nmang vua nhap la:\n");
	xuat(A,n);
//--	printf("\ntrung binh cong cua mang la: %.2f",tinhtrungbinhcong(A,n));
//	float trungbinhcongsoduong=soluongsoduong;
//	if(tinhtrungbinhcong>0){
//		printf("\ntrung binh cong so duong la: %.3f",trungbinhcongsoduong(A,n))
//	}
	return 0;
}

void nhap(int A[],int* n){
	do{
		printf("moi nhap vao so luong phan  tu: ");
		scanf("%d",n);
		if(*n<=0||*n>MAX){
			printf("n khong hop le!!,moi nhap lai: \n");
		}
		}while (*n<=0||*n>MAX);
		for(int i=0;i<*n;i++){	
		printf("phan tu a[%d]  ",i);
		scanf("%d",&A[i]);
	}
}

void xuat(int A[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",A[i]);
	}
}

//float tinhtrungbinhcong(int A[],int n){
//	int tong =0;
//	for(int  i=0;i<n;i++){
//	tong+=A[i];
//	}
//	return (float)tong/n;
//}

//float trungbinhcongsoduong(int A[],int n){
//	int tong=0;
//	int soluongsoduong=0;
//	for(inti=0;i<n;i++){
//		if(A[i]>=0){
//			tong+=A[i];
//			soluongsoduong++;
//		}
//	}
//	return soluongsoduong>0?(float)tong/soluongsoduong:-1;
//}

