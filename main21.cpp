#include <stdio.h>

void nhap(int A[],int n);
void xuat(int A[],int n);
void sapxep(int A[],int n);
int timx(int A[],int n,int x);


int main(){
	int n,x,i,dem=0;
	printf("moi nhap so luong mang: ");
	scanf("%d",&n);
	int A[n];
	nhap(A,n);
	xuat(A,n);
	sapxep(A,n);
	printf("\nsap xep tang ");
    xuat(A, n);
	printf("\nnhap gia tri x can tim: ");
	scanf("%d",&x);
	
	dem=timx(A,n,x);
	if(dem!=0){
		printf("%d xuat hien %d lan",x,dem);
	}else printf("khong co %d trong mang",x);

}

void nhap(int A[],int n){
	for(int i=0;i<n;i++){
		printf("phan tu thu A[%d]  ",i);
		scanf("%d",&A[i]);
	}
}

void xuat(int A[],int n){
	printf("mang vua nhap:\n");
	for(int i=0;i<n;i++){
		printf("%d\t",A[i]);
	}
}

void sapxep(int A[],int n)
{
	int i,j,c;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++)
		if(A[i]>A[j]){
		c=A[i];
		A[i]=A[j];
		A[j]=c;
		}
	}
			
	}	
		
	


int timx(int A[],int n,int x){
	int i=0;
	int dem=0;
	while(i<n){
		if(x==A[i]){
			
				dem++;
				}
		i++;
	}
	return dem;
}

