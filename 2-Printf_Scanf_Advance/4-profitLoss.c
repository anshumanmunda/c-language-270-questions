/*
Write a program to ask user about the cost price and selling price banana per dozen. Calculate the profit or loss earned upon selling 25 bananas.*/

#include<stdio.h>

int main ()
{
  float cp, sp, profit, loss;
  float CP, SP;

  printf("Cost price of 1 dozen bananas: ");
  scanf("%f", &cp);

  CP = (cp/12.0) * 25;
  printf("cost price of 25 bananas:%.2f ",CP);

  printf("\nSelling price of 1 dozen bananas: ");
  scanf("%f", &sp);

  SP = (sp/12.0) * 25;
  printf("Selling price of 25 bananas:%.2f ",SP);

  printf("\nProfit o %.2f", SP-CP);

  return 0;

}