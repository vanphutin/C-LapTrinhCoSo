#include <stdio.h>
#include <string.h>
#include <ctype.h>

void nhap(char s[]);
void xuat(char s[]);
void chuanhoa(char s[]);
void xoakhoangtrang(char *S);

int main() {
    char s[1000];

    nhap(s);
    xuat(s);
    chuanhoa(s);
    xoakhoangtrang(s);
    printf("chuoi sau khi chuan hoa: ");
    xuat(s);

    char fileName[100];
    printf("Nhap ten file de ghi: ");
    scanf("%s", fileName);
    
    FILE *f = fopen(fileName, "w");
    if(f == NULL) {
        printf("Loi: Khong the tao file %s", fileName);
        return 1;
    }

    fprintf(f, "%s", s);
    fclose(f);
    
    printf("Da ghi chuoi vao file %s\n", fileName);
    return 0;
}

void nhap(char s[]) {
    printf("moi nhap chuoi: ");
    fgets(s, 1000, stdin);
    s[strcspn(s, "\n")] = '\0';
}

void xuat(char s[]) {
    printf("chuoi vua nhap la: %s\n", s);
}

void chuanhoa(char s[]){
    int len = strlen(s);
    for(int i=0;i<len;i++){
        if(s[i-1]==' '||i==0){
            s[i]=toupper(s[i]);
        }
        else {
            s[i]=tolower(s[i]);
        }
    }
}

void xoakhoangtrang(char s[])
{
    for(int i=0;s[i]!=0;)
    {
         if(s[i]==32 &&s[i+1]==32)
              strcpy(s+i,s+i+1);
          else
        i++;
    }
    if(s[0]==32) strcpy(s,s+1);
    int l=strlen(s);
    if(s[l-1]==32)s[l-1]=0;
}

