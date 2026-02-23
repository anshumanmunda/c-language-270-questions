/*Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.*/

#include<stdio.h>
int main()
{
  int cp, sp;
  float p,l;
  printf("Enter the cost price: ");  
  scanf("%d",&cp);

  printf("Enter the selling price: ");  
  scanf("%d",&sp);  
  
  if(sp>cp) // sp = 50 cp = 100
  printf("Profit of %.1f%%",((sp-cp)/(float)cp )*100);

  else if(cp>sp)
  printf("Loss of %.1f",((cp-sp)/(float)cp)*100);
  
  else
  printf("No Profit\nNo Loss");
  return 0;
} 
  