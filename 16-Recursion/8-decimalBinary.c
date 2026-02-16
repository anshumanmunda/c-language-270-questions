#include<stdio.h>

void D2B(int);

int main()
{
  int k;
  printf("Enter a decimal number: ");
  scanf("%d",&k);
  D2B(k);
  return 0;
}

void D2B(int n)
{
  if(n)
  {
    D2B(n/2);
    printf("%d",n%2);
  }

}