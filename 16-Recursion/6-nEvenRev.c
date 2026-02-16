#include<stdio.h>

void even(int);

int main()
{
  int k;
  printf("Enter the value of n: ");
  scanf("%d",&k);
  even(k);
  return 0;
}

void even(int n)
{
  if(n>0)
  {
    printf("%d ",2*n);
    even(n-1);
  }

}