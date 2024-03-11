//tim x co trong mang hay khong

#include<stdio.h>
#include<math.h>
#define MAX 100

void nhap (int a[], int &n);
void xuat(int a[],int n);
int timx (int a[],int n,int x);

int main(){
	int n,x;
	int a[MAX];
    nhap(a,n);
    xuat(a,n);
	printf("\nnhap x: ");
	scanf("%d",&x);
	if(timx(a,n,x)){
		printf("%d co trong mang",x);
	}else printf("%d khong co trong mang",x);
	
}


void nhap (int a[], int &n)
{
    do
    {
        printf("\nnhap vao sl phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nso phan tu khong hop le");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void xuat(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

int timx (int a[],int n,int x){

	for(int i=0;i<n;i++){
		if(a[i]==x){
			return 1;
		}
	}return 0;
}

