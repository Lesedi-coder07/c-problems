
#include <stdio.h>

int main (void) {
  
  int userAge;
  
  scanf("%d", &userAge);
  
  if (userAge <= 5) {
    printf("Free");
    
  } else if( userAge <= 12) {
    printf("Child Ticket: $150");
  }
  else if( userAge <= 18) {
    printf("Student Ticket: $180");
  }
  else if( userAge <= 64) {
    printf("Adult Ticket: $250");
  } else {
    printf("Senior Ticket: $125");
  }
  
  return 0;
}
