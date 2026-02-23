/*Write a program which takes the month number as an input and display number of days in that month.
*/

#include<stdio.h>

int main()
{
  int n;
  printf("Enter month number (1-12): ");
  scanf("%d",&n);

  if(n==2)
  printf("28 OR 29 DAYS");
  
  else if(n==4 || n==6 || n==9 || n==11)
  printf("30 Days");
  
  else if(n>=1 || n<=12)
  printf("31 DAYS");

  else
  printf("INVALID MONTH !");
  
  return 0;
}  