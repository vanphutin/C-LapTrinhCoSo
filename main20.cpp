#include<stdio.h>
void nhap(int a[], int n);
void xuat(int a[], int n);
void sapxeptang(int a[], int n); 
void timvachen(int a[], int &n, int x);
void chen(int a[], int &n, int k, int x);
main()
{
	int n,x;
	int a[n]; 
	printf("Nhap vao so phan tu: ");
    scanf("%d", &n);
    nhap(a,n);
	xuat(a,n); 
	sapxeptang(a,n); 
    xuat(a,n);
	printf("\nnhap phan tu muon chen: "); 
	scanf("%d",&x);
	timvachen(a,n,x);
	xuat(a,n);
}
void nhap(int a[], int n)
{
	for(int i = 0; i < n; i++)
    {
        printf("\nNhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}
void xuat(int a[], int n)
{
	printf("\ncac phan tu cua mang\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}
void sapxeptang(int a[], int n)
{
	int temp, i, j, k;
   for (j = 0; j < n; ++j)
   {
    	for (k = j + 1; k < n; ++k)
        { 
        	if (a[j] > a[k])
        	{
            temp = a[j];
            a[j] = a[k];
            a[k] = temp;
    		}
        }
   }
}
void timvachen(int a[], int &n, int x)
{
    int i;
    for(i = 0; i < n; i++)
    {
        if(x <= a[i])
        {
            chen(a, n, i, x);
            return;
        }
    }
    n++;
    a[i] = x;
}
void chen(int a[], int &n, int k, int x)
{
    int i;
    n++;
    for(i = n - 1; i > k; i--)
    {
        a[i] = a[i-1];
    }
    a[i] = x;
}
