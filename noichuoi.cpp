#include <stdio.h>
#include<string.h>
//void my_strcat(char x1[],char x2[]){
//	size_t len1=strlen(x1);
//	size_t len2=strlen(x2);
//			for(int i=len1;i<len1+len2;i++){
//				x1[i]=x2[i-len1];
//			}
//			x1[len1+len2]='\0';
//		}
	


int main (){
	char s_1[10]="xin chao";
	char s_2[20]="titv";
	
	printf("\ns_1= %s",s_1);
	printf("\ns_1= %s",s_1);
//	strcat(s_1,s_2);
	my_strcat(s_1,s_2);
		printf("\ns_1= %s",s_1);
}
