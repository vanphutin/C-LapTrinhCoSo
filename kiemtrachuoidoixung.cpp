//kiem tra chuoi doi xung

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void nhapxuat(char* c1);
int ktdoixung(char* c1);
int main(){
	 char c1[1000];
	 nhapxuat(c1);
	 if(ktdoixung(c1)) {
	 printf("doi xung");
	 }
	 else {
	 	printf("khong doi xung");
	 }
}
void nhapxuat(char* c1){
	printf("nhap sau 1: ");
	gets(c1);
//	printf(" sau vua nhap la:\n c1: %s ",c1);
}
int ktdoixung(char* c1){
	int l=0,r=strlen(c1)-1;
		while(l<=r){
			if(c1[l]!=c1[r])
				return 0;
				--r;
				++l;
		}return 1;
}
