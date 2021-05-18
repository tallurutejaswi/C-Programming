#include<stdio.h>
 
int main() {
   int num1, num2, res;
 
   printf("\nEnter the two numbers : ");
   scanf("%d %d", &num1, &num2);
 
   //Call Function Sum With Two Parameters
   res = sum(num1, num2);
 
   printf("nAddition of two number is : ");
   return (0);
}
 
int sum(int num1, int num2) {
   int num3;
   num3 = num1 + num2;
   return (num3);
}
// output:
//Enter the two numbers : 12 15
//Addition of two number is : 27
