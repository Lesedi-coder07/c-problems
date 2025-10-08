#include <stdio.h>

int main(void) {
  float temp;
  scanf("%f", &temp);
  
  if (temp >= 28) {
   printf("It's hot! A great day for the beach at Qixingtan or river tracing at Mugumuyu!");
  } else if (temp >= 22) {
  printf("The weather is comfortable. Perfect for cycling at Liyu Lake or strolling through Taroko Gorge!");
    } else if (temp >= 18) {
  printf("It's a bit cool. A good time to visit the Ruisui or Antong hot springs.");
    } else {
    printf("It's cold. We recommend indoor activities, like visiting the Pine Garden.");
  }
  
return 0;
}