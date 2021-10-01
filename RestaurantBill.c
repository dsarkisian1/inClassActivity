#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
  
   srand(time(NULL));
   int meal = rand()%4 + 1;
   double taxPercent;
   double tipPercent;
   double mealCost;
   double tax;
   double tip;
   double total;
   printf("Please enter tax as percentage: ");
   scanf("%lf",&taxPercent);
   printf("Please enter tip as percentage: ");
   scanf("%lf",&tipPercent);
  
   if(meal==1){
       printf("\nMeal Ordered Salad @ $9.95\n");
       mealCost = 9.95;
   }
   else if(meal==2){
       printf("\nMeal Ordered Soup @ $4.55\n");
       mealCost = 4.55;
   }
   else if(meal==3){
       printf("\nMeal Ordered Sandwich @ $13.25\n");
       mealCost = 13.25;
   }
   else{
       printf("\nMeal Ordered Pizza @ $22.35\n");
       mealCost = 22.35;
   }
   tax = mealCost*taxPercent/100;
   tip = mealCost*tipPercent/100;
  
  
   printf("\n");
   total = mealCost + tax + tip;
  
  
   printf("Total Tax (%.1lf%%) = $ %12.2lf\n",taxPercent,tax);
   printf("Tip Amount(%.1lf%%) = $ %12.2lf\n",tipPercent,tip);
   printf("====================================\n");
   printf("Total Cost = $ %12.2lf\n",total);
   printf("====================================\n");
  
   return 0;
}