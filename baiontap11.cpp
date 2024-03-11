//tim kiem phan tu x co trong mang khong
// neu co kiem tra x nam vi tri nao
// neu khong co thi chen x vao vi tri k
// xoa pt trung trong mang
//xoa phan tu thu k 
#include <stdio.h>
#include <string.h>
#define max 1000

void nhap(int a[],int &n);
void xuat(int a[], int n);
void sapxepT(int a[],int n);
int timx(int a[],int n,int x);
void vitrix(int a[],int n,int x);
void chenx(int a[], int &n, int x, int k);
void xoaTrung(int a[], int *n);
void xoaPhanTuThuK(int a[], int k, int size);
int main(){
	int n,x,k,size;
	int a[max];
	nhap(a,n);
	xuat(a,n);
	sapxepT(a,n);
	printf("\nmang sau khi sap xep la: ");
	xuat(a,n);
	printf("\nmoi nhap x: ");
	scanf("%d",&x);
	int check=timx(a,n,x);
	if(check==1){
		printf("%d co trong mang",x);
		vitrix(a,n,x);
	}else{
		 printf("\n%d khong co trong mang, moi nhap k de chen vao",x);
		 int k;
		 printf("\nmoi nhap k  ");
		 scanf("%d",&k);
		chenx(a, n, x, k);
        printf("\nMang sau khi chen x vao vi tri %d la:", k);
        xuat(a, n);
	}
	printf("\n");
	xoaTrung(a,&n);
	printf("xoa cac phan tu trung ");
	xuat(a,n);
	xoaPhanTuThuK(a,k,size);
	printf("\nmoi nhap k");
	scanf("%d",&k);
	xuat(a,n);
}

void nhap(int a[],int &n){
	printf("nhap vao so luong ptu: ");
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		printf("phan tu thu a[%d] ",i);
		scanf("%d",&a[i]);
	}
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void sapxepT(int a[],int n){
	int temp = 0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n-1;j++){
				if(a[j]<a[i]){
				temp = a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
		
	}
}
int timx(int a[],int n,int x){
	for(int i=0;i<n;i++){
		if(a[i]==x){
			return 1;
			break; 
		}
	}return 0;
}

void vitrix(int a[],int n,int x){
	int i,cnt = 0;
	for( i=0;i<n;i++){
		if(a[i]==x){
			cnt ++;
			printf("\n%d nam o vi tri a[%d]",x,i);
		}
	}
	if(cnt == 0 ){
		printf("\nkhong tim thay %d trong mang !!",x);
	} 
}
void chenx(int a[],int &n,int x,int k) {
	for(int i=n;i>k;i--){
		a[i]=a[i-1];
	}
	a[k]=x;
	n++;
}
void xoaTrung(int a[], int *n) {
  int i, j, k;

  for (i = 0; i < *n; i++) {
    for (j = i + 1; j < *n;) {
      if (a[j] == a[i]) {
        for (k = j; k < *n - 1; k++) {
          a[k] = a[k + 1];
        }
        (*n)--;
      } else {
        j++;
      }
    }
  }
}

void xoaPhanTuThuK(int a[], int k, int size) {
    if (k < 0 || k >= size) {
        return;
    }
    
    for (int i = k; i < size - 1; i++) {
        a[i] = a[i + 1];
    }
    
    a [size - 1] = 0;
}

