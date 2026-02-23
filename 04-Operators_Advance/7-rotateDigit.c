/*Write a program to take a three digit number from the user and rotate its digits by one position towards the right.*/ 

// EX- 472 ---> 247 imagine like a clock

#include<stdio.h>

int main()
{
  int n,r;
  printf("Enter a 3 digit number: ");
  scanf("%d",&n);

  r = n%10*100 + n/10;
  printf("%d",r);
}