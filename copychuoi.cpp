#include <stdio.h>
#include <string.h>

void my_strcpy(char x1[],char x2[]){
	size_t len2 = strlen(x2);
	for(int i=0; i<len2 ;i++){
		x1[i]=x2[i];
	}
	x1[len2]='\0';
}
int main (){
	char s_1[50]="xin chao titv";
	char s_2[50]="";
	
	printf("\ns_1= %s",s_1);
	printf("\ns_2= %s",s_2);
	
//	strcpy(s_2,s_1);
	my_strcpy(s_2,s_1);
	printf("\n-------");
	printf("\ns_1= %s",s_1);
	printf("\ns_2= %s",s_2);
	
}
