#include<stdio.h>
 
 float C,F;
 
 int main(){
     
     printf("Enter the Celcius value : ");
     scanf("%f",&C);
     
     F = (C*9/5)+32;
     
     printf("%.2f Celcius = %.2f  Fahrenheit",C,F);
 }
