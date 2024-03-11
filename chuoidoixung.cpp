#include <stdio.h>
#include <string.h>
int kiemtradoixung(char x[]);
int main (){
	char s[50];
	printf("nhap vao chuoi : ");
	gets(s);
	printf("chuoi vua nhap la: ");
	puts(s);
	if(kiemtradoixung(s)){
		printf("chuoi %s la chuoi doi xung!!",s);
	}else printf("%s khong la chuoi doi xung!!",s);
	
	
}

int kiemtradoixung(char x[]){
	//1 doi xunng
	//0 khong doi xung
	
	size_t len = strlen(x);
	for(int i=0;i<len/2;i++){
		if(x[i] != x[len-i-1])
		return 0;
		}
			return 1;
	}

