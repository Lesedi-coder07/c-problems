// Online C compiler to run C program online
/*

The current time is Wednesday morning, October 8, 2025. You are a quality inspector at a famous mochi factory in Hualien. A new batch of mochi has just come off the production line, and you need to write a program to quickly verify the weight of each box.

According to factory standards, the weight of a standard box of mochi must bebetween 250 grams (inclusive) and 270 grams (inclusive). Your task is to calculate how many boxes in a batch meet this quality standard.

Write a program that first reads an integerN, representing the total number of mochi boxes in the batch. The program will then read theNindividual weights of the mochi boxes. Finally, it will calculate and print the total number of boxes that fall within the acceptable weight range.


Input

第一行是一個正整數N，代表待檢驗的麻糬總盒數。

接下來會有N行，每一行包含一個整數，代表一盒麻糬的重量（單位為公克）。

The first line is a positive integerN, representing the total number of mochi boxes to inspect.

This is followed byNlines, where each line contains an integer representing the weight of one mochi box in grams.


Output

Print a single line of text in the following format:Total Qualified Boxes: [count]

Where[count]is the number of mochi boxes with a weight between 250g and 270g, inclusive.

 */



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