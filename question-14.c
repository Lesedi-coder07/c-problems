#include <stdio.h>

int main (void) {
  float totalVisitors;
  float averageVisitors;
  float d1, d2, d3, d4, d5, d6, d7;
  scanf("%f %f %f %f %f %f %f", &d1, &d2, &d3, &d4, &d5, &d6, &d7);
  totalVisitors = d1 + d2 + d3+ d4 + d5 + d6+ d7;
  
  
  
  averageVisitors = totalVisitors / 7;
  printf("Total Visitors: %.0f\n", totalVisitors);
  printf("Average Visitors: %0.1f", averageVisitors);
  
  
  return 0;
}