// fibinaci

#include <stdio.h>
#include <math.h>
#include <string.h>
int fibonacci(int n);
int ghifile(char name[1000],int n);
int main(){
	int n;
	char name[1000]; 
	
	printf("nhap n: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
			printf("%d ", fibonacci(i));
	}
	
	printf("\nnhap ten file ");
	scanf("%s",name);
	
	ghifile(name,n);
}

int fibonacci(int n){
	if(n < 0){
		return 0;
	}
	if (n == 0){
		return 0;
	}
	if(n == 1){
		return 1;
	}
	else return fibonacci(n-1) + fibonacci(n-2);
}
int ghifile(char name[1000],int n){
	FILE *fp;
	fp = fopen(name,"w");
	
	if(fp == NULL){
		printf("khong the thao tac voi file !!");
		return 1;
	}
	for(int i=0;i<n;i++){
		fprintf(fp,"%d ", fibonacci(i));
	}
	printf("tep luu thanh cong !!");
	fclose(fp);
}
