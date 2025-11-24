#include <stdio.h>

int main() {
    int n, l;
    printf("Enter two numbers: ");
    scanf("%d %d", &n, &l);
    for (int i = n; i <= l; i++) {
        int count = 0; 
        if (i <= 1) {
            continue; 
        }
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 2) {
            printf("%d ", i); 
        }
    }
    printf("\n");
    return 0;
}
