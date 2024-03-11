//doi xen ke 1 chu hoa 1 chu thuong
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#define MAX 100
void nhap(char *s);
void xuat(char *s);
void doichu(char *s);
void xuatfile(char *s,char *tenfile);
int main (){
	
	char s[MAX];
	char tenfile[MAX];
	nhap(s);
	printf("chuoi vua nhap la: ");
	xuat(s);
	doichu(s);
	printf("chuoi sau khi viet hoa: ");
	xuat(s);
	xuatfile(s,tenfile);
}

void nhap(char *s){
	printf("moi nhap chuoi: ");
	fgets(s,MAX,stdin);
}
void xuat(char *s){
	puts(s);
}
void doichu(char *s){
	int len = strlen(s);
	for(int i=0;i<len;i++){
		if(i%2==0){
			s[i] = toupper(s[i]);
		}else s[i]= tolower(s[i]);
	}
}
void xuatfile(char *s,char *tenfile){
	FILE  *f;
	printf("moi nhap ten file muon tao: ");
	scanf("%s",tenfile);
	f = fopen(tenfile,"w"); 
	if(f == NULL){
		printf("khong the tao file!!");
		exit(1);	
	}
	fprintf(f , "%s" , s);
	fclose(f);
	printf("file luu thanh cong");
}
