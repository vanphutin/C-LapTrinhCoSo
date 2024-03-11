//tinh tong chuoi

#include <stdio.h>
#include <string.h>
#include <ctype.h>
void nhap(char *a);
int tong(char *a); 
main() 
{
    char a[100];
    nhap(a);
    printf("tong = %d",tong(a));
}
void nhap(char *a) 
{
    printf("Nhap chuoi: ");
    gets(a); 
}
int tong(char *a)
{
	int l = strlen(a);
	int s=0; 
    for (int i = 0; i < l; i++) 
	{
		if (isdigit(a[i]))  //hamn kiem tra chuoi nhap co phai so hay khong
		
		{
		s+=a[i]-'0'; 
		}
    }
    return s; 
}
