#include <stdio.h>

int main(){
    int i, n;
    int a[100];
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int k, x;
    scanf("%d%d", &k, &x);
    for(i=n-1; i>=k; i--){
        a[i+1] = a[i];
    }
    a[k] = x;
    n++;
    for(i = 0; i<n; i++){
        printf("%d ",a[i]);
    }
    return 0;
}

