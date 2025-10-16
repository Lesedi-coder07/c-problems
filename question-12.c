#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    
    for (int i = 1; i <= N; i += 2) {
        int spaces = (N - i) / 2;
        
        for (int s = 0; s < spaces; s++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }

    
    for (int i = N - 2; i > 0; i -= 2) {
        int spaces = (N - i) / 2;
        
        for (int s = 0; s < spaces; s++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}