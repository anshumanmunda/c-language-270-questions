//Write a program to calculate simple interest.
// SI = P*R*T 10000 rupees @5 for %years FD in SBI 

#include<stdio.h>

int main ()
{
  int p, r, t;
  float SI;

  printf("Enter Principal, Rate and Time: ");
  scanf("%d %d %d", &p, &r, &t);

  SI = (p*r*t)/100.0;  // didvide ke case me be alert
  printf("Simple Intrest = %.3f", SI);
  return 0;
}
