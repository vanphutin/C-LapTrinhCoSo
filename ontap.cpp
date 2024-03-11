#include <stdio.h>
#include <math.h>
void nhap(int *a, int n);
void xuat(int *a, int &n);
void KTraSNT(int *a, int n, int k);
int SoNguyenTo(int n);
int SoLonNhat(int *a, int n);
void ViTriSLN(int *a, int n);
void Xoa(int *a, int &n, int k);
void XoaMax(int *a, int &n);
void chen(int *a, int &n, int k, int vt);
void ChenCanhMax(int *a, int &n, int k);
void SapXep(int *a, int n);
int main(){
	int n,k,x;
	printf("Nhap so luong phan tu trong mang: ");
	scanf("%d", &n);
	int arr[n];
	nhap(arr,n);
	printf("Cac phan tu trong mang la: ");
	xuat(arr,n);
	printf("\nNhap so k: ");
	scanf("%d", &k);
	KTraSNT(arr,n,k);
	ViTriSLN(arr,n);
	printf("\nNhap x:");
	scanf("%d",&x);
	printf("\nCac phan tu sau khi chen %d", x);
	ChenCanhMax(arr,n,x);
	xuat(arr,n);
	printf("\nCac phan tu sau khi xoa so lon nhat: ");
	XoaMax(arr,n);
	printf("\n");
	xuat(arr,n);
	SapXep(arr,n);
	
}
void nhap(int *a, int n){
	printf("Nhap cac phan tu trong mang\n");
	for(int i = 0; i < n; i++){
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
}

void xuat(int *a, int &n){
	for(int i = 0; i < n; i++){
		printf("%d\t",a[i]);
	}
}
int SoNguyenTo(int n){
	if(n <= 1){
		return 0;
	}
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

void KTraSNT(int *a, int n, int k){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(SoNguyenTo(a[i]) == 1 && a[i] < k){
			if(dem == 0){
				printf("Cac SNT nho hon %d co trong mang la: ", k);	
			}
			printf("%d ", a[i]);
			dem = 1;
		}
	}
	if(dem == 0){
		printf("Khong co SNT nao nho hon %d xuat hien trong mang!!! \n", k);
	}
}

int SoLonNhat(int *a, int n){
	int max = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	return max;
}

void ViTriSLN(int *a, int n){
	printf("\nVi tri cua so lon nhat co trong mang la: vi tri thu ");
	for(int i = 0; i < n; i++){
		if(a[i] == SoLonNhat(a,n)){
			printf("%d ",i);
		}
	}
}
void chen(int *a, int &n, int k, int vt){
	n++;
	for(int i = n ; i >= vt; i--){
		a[i+1] = a[i];
	}
	a[vt] = k;
}

void ChenCanhMax(int *a, int &n, int k){
	for(int i = 0; i < n; i++){
		if(a[i] == SoLonNhat(a,n)){
			chen(a,n,k,i+1); 
		}
	}
}
void Xoa(int *a, int &n, int k){
	for(int i = k; i< n; i++){
		a[i] = a[i+1];
	}
	n--;
}

void XoaMax(int *a, int &n){
	int i = 0;
	while(i < n){
		if(a[i] == SoLonNhat(a,n)){
			Xoa(a,n,i);
		}
		else{
			i++;
		}
	}
}

void SapXep(int *a, int n){
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(a[i] > a[j]){
				int b = a[i];
				a[i] = a[j];
				a[j] = b;	
			}
		}
	}
}
