/*Assume price of 1 USD is INR 86.54. Write a program to take the Imount in INR and convert it into USD.
*/  // 1INR = 1/86.54 USD

#include<stdio.h>
int main()
{
  int n; 
  printf("Enter price in Rupees: ");
  scanf("%d",&n);

  printf("%d Rupees = $%.2f",n, n/86.54);
}