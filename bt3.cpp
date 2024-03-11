#include <stdio.h>
#include <string.h>
#include <ctype.h>

void biendoi(char s[]);
void nhapfile(char s[],char *file);
void GhiFile(char *s,char *FileOut);
void DocFile(char *FileIn,char *a);
int main() {
    char s[100],FileOut[100],FileIn[100];
	printf("\nNhap chuoi muon doc: ");
	gets(FileIn);
	DocFile(FileIn,s);
	puts(s);
	printf("\nChuoi da nhap: ");
	puts(s);
	biendoi(s);
	printf("\nChuoi sau khi chuan hoa: ");
	puts(s);
	printf("\nNhap ten file muon luu chuoi vao: ");
	gets(FileOut);
	GhiFile(s,FileOut);
	printf("\nDA GHI CHUOI VAO FILE THANH CONG!!!");
    return 0;
}

void biendoi(char s[]) {
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (i%2==0) {
            s[i] = toupper(s[i]);
        } else {
            s[i] = tolower(s[i]);
        }
    }
}
void nhapfile(char s[],char *file){
	FILE *f = fopen(file,"w");
	fputs(s,f);
	fclose(f);
} 
void DocFile(char *FileIn, char *a){
	FILE *f = fopen(FileIn, "r");
	fgets(a,100,f);
}
void GhiFile(char *s,char *FileOut){
	FILE *f = fopen(FileOut,"w");
	fputs(s,f);
	fclose(f);
}
