//Viet chuong trinh dem so chu trong chuoi ki tu

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define A 100
void nhapchuoi(char *s);
void xuatchuoi(char *s);
int demtu(char *s);
int main(){
	char s[A];
	nhapchuoi(s);
	printf("chuoi sau khi nhap la: ");
	xuatchuoi(s);
	int len = demtu(s);
	printf("so tu co trong chuoi la: %d",len);
	
}
void nhapchuoi(char *s){
	printf("moi nhap vao chuoi: ");
	gets(s);	
}
void xuatchuoi(char *s){
	puts(s);
}
int demtu(char *s){
	int len = strlen(s);
	int count = 0;
//	int state = 0;
	for(int i=0;i<len;i++){
		if(s[i]!=' '|| s[i]!='\t'||s[i]!='\n'){
//			state = 0;
//		}else if(state==0){
//			state = 1;
			count ++;
		}
	}return count;
}
