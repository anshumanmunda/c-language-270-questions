//Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float simple_Intrest(int, int, int);

int main()
{
  int p, r, t;
  printf("Enter Principal, Rate & time: ");  
  scanf("%d %d %d",&p, &r, &t);  
  printf("Simple Intrest = %.2f", simple_Intrest(p,r,t));
  return 0;
} 

float simple_Intrest(int p, int r, int t){
  return ( (p*r*t)/100.0 );
 
}