//dem so lan xuat hien cua mot tu trong chuoi

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define A 100
void nhap(char *s);
void xuat(char *s);
 void demtu(char *s);
int main(){
	char s[A];
	nhap(s);
	xuat(s);
	demtu(s);
} 
void nhap(char *s){
	printf("nhap chuoi: ");
	gets(s);
}
void xuat(char *s){
	printf("chuoi vua nhap la: ");
	puts(s);
}
 void demtu(char *s){
 	char *token = strtok(s," ");
 	int cnt= 0;
 	while(token != NULL){
 		if(token !='\n' || token !='\0'){
 			++cnt;
 			token = strtok(NULL," ");
		 }
	 }
	 printf("%d",cnt);
 }

