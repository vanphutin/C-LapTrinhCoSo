#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000
int  demdong(char *tenfile);
int main(){
	char s[MAX];
	printf("nhap ten file can doc: ");
	scanf("%s",s);
	strcat(s,".txt");
	int count = demdong(s);
	if(count == -1){
		printf("loi");
	}else printf("file %s co %d dong",s,count);
}

int demdong(char *tenfile){
	FILE *f;
	int count =0;
 	f = fopen(tenfile,"r");
	if(f == NULL){
		return -1;
	}
	char ch;
	while ((ch = fgetc(f)) != EOF){
		if(ch=='\n'){
			count ++;
		}
	}
	fclose(f);
	return count;
}
