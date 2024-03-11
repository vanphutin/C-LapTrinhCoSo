#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define A 100
int docfile(char *name);
int main(){
	char s[A];
	printf("nhap ten file can doc: ");
	scanf("%s",s);
	strcat(s,".txt");
	 docfile(s);
}

int docfile(char *name){
	FILE *f;
	f = fopen(name,"r");
	if(f == NULL){
	return -1;
	}
	char data[A]; 
     while (fgets(data, sizeof(data), f) != NULL){
        printf("%s", data);
    }
    return 0;
}
