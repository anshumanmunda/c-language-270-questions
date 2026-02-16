#include<stdio.h>

void D2O(int);

int main()
{
  int k;
  printf("Enter a decimal number: ");
  scanf("%d",&k);
  D2O(k);
  return 0;
}

void D2O(int n)
{
  if(n)
  {
    D2O(n/8);
    printf("%d",n%8);
  }

}