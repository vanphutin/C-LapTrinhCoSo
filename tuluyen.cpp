#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	char c[5005];
	printf("moi nhap vao chuoi: ");
	gets(c);
	printf("chuoi vua nhap la: ");
	puts(c);
	printf("\n");
	int cnt[256]={0};
	for(int i=0;i<strlen(c);i++){
		cnt[c[i]]++;
	}
	int res=0;
	char kt;
	for(int i=0;i<256;i++){
		if(cnt[i]>=res){
			res=cnt[i];
			kt=(char)(i);
		}
	}
	printf("%c",kt);
}
 
