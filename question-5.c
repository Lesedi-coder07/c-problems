
#include <stdio.h>

int main (void) {
  
  int x1,y1,x2,y2,px,py;
  
  
  scanf("%d %d %d %d %d %d", &x1,&y1,&x2,&y2,&px,&py);
    
    int inside = 0;
  
  // if px == x1 and px == x2 -> on border.
//  10  >  0    10  <  10   3 > 0     3 <  5
if ((px >= x1 & px <= x2) & (py >= y1 & py <= y2)){
    inside = 1;
    
   }
  
   if ( ( (px == x1 | px == x2) & (inside == 1) ) | ( (py == y1 | py == y2) & (inside == 1))) {
      printf("On the border");
      
  }  else {
      
      if (inside == 1) {
          printf("Inside");
      } else {
          printf("Outside"); }
  }
  
  
  return 0;
}
