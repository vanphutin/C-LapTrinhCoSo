#include <stdio.h>
#include <string.h>
#include <ctype.h>

void count_char(char *str) {
    int count[256] = {0}; 

    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) { 
            count[tolower(str[i])]++;
        }
    }

    for (int i = 0; i < 26; i++) {
    	if(count['a'+i] > 0){
		    printf("%c: %d\n", 'a' + i, count['a' + i]);

		} 
    }
}

int main() {
    char str[100];  
    printf("Nhap chuoi: ");
    gets(str); 

    count_char(str);

    return 0;
}

