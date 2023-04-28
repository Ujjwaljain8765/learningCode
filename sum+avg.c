#include<stdio.h>
int main(){
//declaring two variables
float num1;
float num2;
//taking input of two numbers
printf("enter the value of num1: ");
scanf("%f",&num1);
printf("enter the value of num2: ");
scanf("%f",&num2);

float sum= num1+num2;

//print the value of sum
printf("the value of sum is :");
printf( "%f \n",sum );

float avg= (num1 + num2)/2;

//print the value of avg
printf("the value of avg is :");
printf( "%f \n",avg);


return 0;

}