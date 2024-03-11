#include<stdio.h>

int main() {
    int n,k;
    int a[1000];
    scanf("%d,&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    int dem=0;
    for(int i=0;i<n;i++){
        if(a[i]==k){
            dem++
        }

    }printf("%d",dem);
    return 0;
}

