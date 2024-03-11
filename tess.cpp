#include<stdio.h>
#include<string.h>

int main() {
    char s[100];
    printf("nhap vao chuoi: ");
    fgets(s,100,stdin);
    printf("mang vua nhap la: %s",s);
    int len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]=='3'){
            s[i]='e';
            
        }
    }printf("%s",s);
    return 0;
}


