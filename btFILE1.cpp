#include <stdio.h>
#include <stdlib.h>

int main (){
	FILE *f;
	f=fopen("bai1.txt","r");
	if(f == NULL){
		printf("loi tao hoac mo file!!");
		exit(1);
	}
	int n;
	fscanf(f,"%d", &n);
	printf("gia tri cua n: %d",n);
	fclose(f);
	
}

