#include<stdio.h>
#include<math.h>
#define MAX 100
 
void nhap (float a[], int &n)
{
    do
    {
        printf("\nnhap vao sl phan tu: ");
        scanf("%d", &n);
        if(n <= 0 || n > MAX)
        {
            printf("\nsp phan tu khong hop le");
        }
    }while(n <= 0 || n > MAX);
    for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
}
void xuat(float a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%.1f  ", a[i]);
    }
}

float timmax(float a[],int n){
	float max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max) max=a[i];
	
		
	}	return max;
}


int main()
{
    int n;
    float a[MAX];
    nhap(a, n);
    xuat(a, n);
    printf("\nMax = %f", timmax(a, n));
}



