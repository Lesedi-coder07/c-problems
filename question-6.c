#include <stdio.h>
#include <string.h> // For strlen()

int cube(int n){
    return n * n * n;
}

int getFullInt(int d1, int d2, int d3) {
    return d1 * 100 + d2 * 10 + d3;;
}

int main(void) {
    char number_str[12]; // Character array (string) to hold the number.
                         // Size 12 allows for 10 digits, a sign, and a null terminator.
    scanf("%s", number_str); "132"
       
    int d1 = number_str[0] - '0'; 
    int d2 = number_str[1] - '0';
    int d3 = number_str[2] - '0';
    
    
    if ( (cube(d1)  + cube(d2) + cube(d3)) == getFullInt(d1, d2, d3) ){
        //Then its narcistic...
        
        
        printf("Narcissistic Number");
        
    } else if (d1 == d3) {
        printf("Palindrome");
        
    } else if (d2 > d1 && d3 > d2) {
        printf("Increasing");
    } else {
        printf("Ordinary");
    }
    
    

    
    return 0;
}