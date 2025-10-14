#include <stdio.h>


/*

You have been tasked with developing the core logic for this reporting system.

Scoring and Rules

Hunters will sequentially input the "code" and "weight" for each animal. The system calculates points based on the following rules:

Animal Codes and Base Points:

Code1:Wild Boar. Base Points = weight in kg.

Code2:Formosan Reeve's Muntjac. Base Points = weight in kg * 2.

Code3:Formosan Sambar Deer. Base Points = weight in kg * 3.

Special Rules:

[Prize Boar Bonus]: If a reportedWild Boarweighsover 100 kg, it receives an additional50bonus points.

[Muntjac Conservation Limit]: To manage the muntjac population, only thefirst fivereported Muntjacs will earn points. Any Muntjac reported after the fifth one (the 6th, 7th, etc.) should still be included in the total animal count and total weight, but will earn0points.

Write a program that reads a series of hunting records until a "sentinel value" indicating the end of input is reached. After all records are processed, the program must output three statistics:

The total number of animals reported.

The total weight of all reported animals.

The total conservation points calculated according to the rules.

*/




int main (void) {
int animal = 4;
int weight;
int count = 0;
int basePoint = 0;
int totalWeight = 0;
int noMun = 0;
int consPoint = 0;


 while (animal != 0){
  scanf("%d %d", &animal, &weight);
  
  if (animal == 1){
        
        
        basePoint += weight;
      
      if (weight > 100 ){
          basePoint += 50;
      }
  }
  
  if (animal == 2){
      noMun++;
      if (noMun <= 5) {
      basePoint += (weight * 2);
          
      }
      
      
  }
  
  if (animal == 3){
      basePoint += (weight * 3);
  }
  
  if (animal == 0) { break; }
  
  totalWeight += weight;
  count++;
 };
  
  
  printf("Total Animals Reported: %d\n", count);
  printf("Total Weight Reported: %d kg\n", totalWeight);
  printf("Total Conservation Points: %d", basePoint);
  
  
  return 0;
}