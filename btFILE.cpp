#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	FILE *f;
	
	//1-tao file
	//2-mo file
	
	
	f = fopen("bai1.txt","w"); // mo ra de ghi (write)
	if(f == NULL){
		printf("\nkhong the tao va mo file!!");
		exit(1);
	}
	
	
	
	//3- doc hoac ghi file
	 	// doc file 
	
	int n;
	 printf(" nhap vao n: ");
	 scanf("%d",&n);
	 	//ghi file
	
	fprintf(f,"%d",n);
	
	//4-dong file
	fclose(f);
	
	return 0;
}
