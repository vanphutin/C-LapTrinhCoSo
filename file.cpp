#include <stdio.h>
#include <ctype.h>
#include <string.h>

void nhapxuat(char* s,FILE* ten );
void chuanhoa(char s[]);
int main(){
	  FILE* tenfile;
	printf("nhap ten file: ");
	char a[1000];
	gets(a);
	FILE *ten = fopen(a, "w");
    ten = fopen(tenfile, "w");
	char s[1000];
	nhapxuat(s,ten);	
	chuanhoa(s);
	printf("chuoi sau khi chuan hoa: %s",&s); 
	fprintf(ten, "%s", s);
    fclose(ten);
}

void nhapxuat(char* s,FILE* ten){
	gets(s);
	printf("chuoi sau khi nhap: ");
	puts(s);
}
void chuanhoa(char s[]){
	int len = strlen(s);
    int i = 0;
    while (i < len) {
        while (isspace(s[i])) {
            i++;
        }
        if (i < len && isalpha(s[i])) {
            s[i] = toupper(s[i]);
            break;
        }
        i++;
  	  }
	}

