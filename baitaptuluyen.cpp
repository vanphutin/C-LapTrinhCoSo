#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main(){
	char c[1005];
	gets(c);
	//viet hoa thanh viet thuong
//	for(int i=0;i<strlen(c);i++){
//		c[i]=tolower(c[i]);
//	}
//	printf("%s",c);

	//dem so luong chu cai,so,ki tu dat biet
//int dem1=0, dem2=0;
//for(int i=0;i<strlen(c);i++){
//	if(isalpha(c[i])) ++dem1;
//	else if(isdigit(c[i])) ++dem2;
//	}
//	printf("%d %d %d",dem1,dem2,strlen(c)-dem1-dem2);
//}

//dem so lan xuat hien tron 
	int cnt[26]={0};
	for(int i=0;i<strlen(c);i++){
		cnt[c[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(cnt[i]!=0){
			printf("%c %d\n",(i+'a'),cnt[i]);
	    	}
	  }
	}
