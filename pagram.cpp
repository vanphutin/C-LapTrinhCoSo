//kiem tra pagram
#include<stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
void nhapxuat( char* c);
int pangram(char* c);
int main(){
	char c[1000];
	nhapxuat(c);
	if(pangram(c))
		printf("\n YES");
	else printf("\n NO");
} 

void nhapxuat( char* c){
	printf("moi nhap chuoi: ");
	gets(c);
	printf("chuoi vua nhap: ");
	puts(c);
}

int pangram(char* c){
	 int s[26]={0};
	 for(int i=0;i<strlen(c);i++){
	 	s[c[i]-'a']=1;
}
	for(int i=0;i<26;i++){
		if(c[i]==0) return 0;
	}return 1;
}
