// Write a program to check weather a given year is leap or not.
#include<stdio.h>
int main()
{
  int n;
  printf("Enter year: ");  
  scanf("%d",&n);
  if(n%100 !=0) // ordinary year 
  printf((n%4 == 0)?"Leap year\n": "Non Leap year\n");
  
  else  // centuary year
  printf((n%400==0)?"Leap year\n": "Non leap year\n");

  return 0;
}  