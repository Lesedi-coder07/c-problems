#include <stdio.h>

int main() {
    int start;
    int end;
    
    scanf("%d %d", &start, &end);
    
    
    

    int sum = 0;
    for (int i = start; i <= end; i ++) {
        int j = i;
        int digitPos = 4;
        int digits[5] ={0};
        while (j > 0) {
            
            int digit = j % 10;
            digits[digitPos] = digit;
            digitPos--;
            j = j / 10;
            
        }
         int isMShape = 
            (digits[0] < digits[1]) &&
            (digits[1] > digits[2]) &&
            (digits[2] < digits[3]) &&
            (digits[3] > digits[4]);

        
        int isUnique = 1;
        for (int a = 0; a < 5; a++) {
            for (int b = a + 1; b < 5; b++) {
                if (digits[a] == digits[b]) {
                    isUnique = 0;
                    break;
                }
            }
            if (!isUnique) break;
        }

        if (isMShape && isUnique) {
            sum += i;
        }
     
        
    }
    
    printf("%d", sum);

    
    
}