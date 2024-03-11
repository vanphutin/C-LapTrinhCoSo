// kiem tra so nguyen to va ghi vao file

#include <stdio.h>
#include <math.h>
#include <string.h>
int snt(int n);
int ghifile(char name[1000],int snt,int n);
int docfile(char *name);
int main(){
	int n;
	char name[100];
	printf("nhap n  ");
	scanf("%d",&n);
	int snt1 = snt(n);
	if(snt1>0){
		printf("%d la snt ",n);
	}else {
		printf("%d khong phai snt",n);
	}
	printf("\nnhap ten file can ghi: ");
	scanf("%s",name);
	strcat(name,".txt");
	ghifile(name,snt1,n);
	printf("\nnhap ten file can doc: ");
	scanf("%s",name);
	strcat(name,".txt");
	docfile(name);
} 

int snt(int n){
	
	if(n<2){
		return 0;
	}
	for(int i=2;i<n;i++){
		if(n % i == 0){
			return 0;
		}
	}return 1;
}
int ghifile(char name[1000],int snt,int n){
	FILE *fp;
	fp = fopen(name,"w");
	if(fp == NULL){
		printf("khong the ghi file !!");
		return 1;
	} if(fp != NULL){
		printf("file duoc ghi thanh cong!!");
	}
	if(snt){
		fprintf(fp,"%d la snt ",n);
	}else fprintf(fp,"%d khong phai la snt",n);
	fclose(fp);
}
int docfile(char *name){
	FILE *f;
	f = fopen(name,"r");
	if(f == NULL){
	return -1;
	}
	char data[100]; 
     while (fgets(data, sizeof(data), f) != NULL){
        printf("%s", data);
    }
    return 0;
}
