//Write a function to check whether a given number contains a given digit or not. (TSRS) 

#include<stdio.h>

int digit_check(int,int);

int main()
{
  int n,d;
  printf("Enter a number: ");
  scanf("%d",&n);
  printf("Enter the digit: ");
  scanf("%d",&d);
  
  printf( (digit_check(n,d))? "Found": "Not Found !" );;

  return 0;
}


int digit_check(int n, int d)
{
  while(n)
  {
    if(n%10 == d) {
      return 1;
      break;
    }
    n/=10;
  }
  return 0;
}



