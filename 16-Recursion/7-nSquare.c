#include<stdio.h>

void square(int);

int main()
{
  int k;
  printf("Enter the value of n: ");
  scanf("%d",&k);
  square(k);
  return 0;
}

void square(int n)
{
  if(n>0)
  {
    square(n-1);
    printf("%d ",n*n);
  }

}