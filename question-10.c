// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int numberOfBoxes;
    int total = 0;
    scanf("%d", &numberOfBoxes);
    
    for (int i = 0; i < numberOfBoxes; i++) {
        int boxWeight;
        scanf("%d", &boxWeight);
        if (boxWeight >= 250 && boxWeight <= 270 ) {
            total++;
        }
    }
    
    printf("Total Qualified Boxes: %d", total);

    return 0;
}