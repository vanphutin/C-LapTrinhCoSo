#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main (){
	char c[10005];
	printf("nhap vao chuoi so: ");
	gets(c);

	for(int i=0;i<strlen(c);i++){
		c[i]=tolower(c[i]);
	}
	printf("chu in HOA thanh chu thuong: %s",c);
	for(int i=0;i<strlen(c);i++){
		c[i]=toupper(c[i]);
	}
	printf("\nchu thuong thanh in HOA: %s",c);
	
	int dem1=0,dem2=0;
	for(int i=0;i<strlen(c);i++){
		if(isalpha(c[i])) ++dem1;
			else if(isdigit(c[i])) ++dem2;
	}
	printf("%d %d %d",dem1,dem2,strlen(c)-dem1-dem2);
}

