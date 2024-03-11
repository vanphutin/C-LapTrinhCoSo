// dem so dong trong file va in ra man hinh

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000
int docfile(char *tenfile); 
int main(){
	char s[MAX];
	printf("nhap ten file can doc:  ");
	scanf("%s",s);
	strcat(s, ".txt");
//	int count = docfile(s);
	if(docfile(s) == -1 ){
		printf("LOI FILE");
	}else{
		printf("file %s co %d dong",s,docfile(s));
	} 
	return 0;
	
}
int docfile(char *tenfile){
	FILE *f;
	int count = 0;
	f = fopen(tenfile,"r");
	if(f == NULL ){
		return -1;
	}
	char ch;
	while ((ch = fgetc(f)) != EOF){
		if(ch == '\n'){
			count ++;
		}
	} 
	fclose(f);
	return count;
	
}
