#include<stdio.h>

// Write a program that calculates the user’s body mass index (BMI) as BMI=w/m^2 
// Where w is weight in kilograms and m is height in meters, both received from user
// And categorizes the BMI as underweight, normal, overweight, or obese.


int main(){
	
   int weight;
   float height;
   float bmi ;
   int i;

   	
   	  printf("User's weight(kg):");
   	  scanf("%d",&weight);
   	  printf("User's height(m):");
   	  scanf("%f",&height);
   	  
   	  bmi=weight/(height*height);
   	  
   	   if(bmi<=18.5)
   	      printf("UNDERWEIGHT\n");
       else if(bmi>=18.5 && bmi<=24.99)
          printf("NORMAL\n");
       else if(bmi>=25 && bmi<=29.99)
          printf("OVERWEIGHT\n");
       else if (bmi>=30)
          printf("OBESE\n");
   	  
   	
   
   return 0;
  
}
