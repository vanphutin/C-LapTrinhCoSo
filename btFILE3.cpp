#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
void nhapmang(int a[],int &n){
	do{
		printf("nhap n:");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=0;i<n;i++){
		printf("phan tu thu a[%d] ",i);
		scanf("%d",&a[i]);
		
	}
}
void xuatmang(int a[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
void xuatfile(int a[],int n,char tenfile[50]){
	FILE *f;
	f = fopen(tenfile,"r");
	if(f == NULL ){
		printf("loi");
		exit(1);
	}
	fprintf(f,"%d\n",n);
	for(int i=0;i<n;i++){
		fprintf(f,"%d\t",a[i]);
	}
	fclose(f);
}
int main(){
	int a[1000];
	int n;
	nhapmang(a,n);
	xuatmang(a,n);
	xuatfile(a,n,"bai2.txt");
	
}
