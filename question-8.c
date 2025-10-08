#include <stdio.h>

int main(void) {
  int dType, pType, tType;
  int finalFare = 0;
  scanf("%d %d %d", &dType, &pType, &tType);
  
  if (tType == 1 ) {
      finalFare = 150;
  } else {
      finalFare = 250;
  }
    
    
    if (pType > 1) {
        finalFare = finalFare - (finalFare * 0.5);

    }
    
    if (dType == 2) {
        finalFare = finalFare + (finalFare * 0.2);
    }
    
    printf("Final Fare: %d", finalFare);
    
  
  
return 0;
}