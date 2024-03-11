#include <stdio.h>

int a[10001], b[10001];
int n, max = 0;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > max) {
            max = a[i];
        }
    }
    for (int i = 0; i <= max; i++) {
        b[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        b[a[i]] += 1;
    }
    for (int i = 0; i <= max; i++) {
        if (b[i] > 0) {
            printf("%d-%d;", i, b[i]);
        }
    }
    return 0;
}

