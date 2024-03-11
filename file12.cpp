#include<stdio.h>
void docfile(char *filename, int a[],int &n);
void ghifile(char *filename,int a[],int n);
main()
{
	char fileIn[50],fileOut[50];
	int a[100],n;
	printf("\nNhap ten file can doc: ");
	gets(fileIn);
	docfile(fileIn,a,n);
	printf("\nNhap ten file can ghi: ");
	gets(fileOut);
	ghifile(fileOut,a,n);
	
}
void docfile(char *filename, int a[],int &n)
{
	FILE *f = fopen(filename,"r");
	if(f!=NULL){
		fscanf(f,"%d",&n);
		for(int i =0 ;i<n;i++)
			fscanf(f,"%d",&a[i]);
	}
	
	fclose(f);
}
void ghifile(char *filename,int a[],int n)
{
	FILE *f = fopen(filename,"w");
	if(f!=NULL){
		fprintf(f,"%d\n",n);
		for(int i =0;i<n;i++)
			fprintf(f,"%d\t",a[i]);
	}
	fclose(f);
}
