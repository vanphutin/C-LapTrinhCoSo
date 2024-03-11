#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 1000

void nhapmang(int a[],int &n){
	do{
		printf("nhap vao so luong phan tu: ");
		scanf("%d",&n);
	}while (n<=0 ||n>MAX);
	for(int i=0;i<n;i++){
		printf("phan tu thu a[%d] ",i);
		scanf("%d", &a[i]);
	}
}
void xuatmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}

void xuatfile(int a[],int n,char tenfile[MAX]){
	FILE *f;
	printf("\nnhap vao ten file: ");
	scanf("%s",tenfile);
	f = fopen(tenfile,"w");
	if(f == NULL){
		printf("loi tao va xuat file");
		exit(1);
	}
	fprintf(f,"%d\n",n);
	for(int i=0;i<n;i++){
		fprintf(f,"%d\t",a[i]);
	}
	fclose(f);
}

int main(){
	int a[MAX];
	int n;
	char tenfile[MAX];
	nhapmang(a,n);
	xuatmang(a,n);
	xuatfile(a,n,tenfile);
}
