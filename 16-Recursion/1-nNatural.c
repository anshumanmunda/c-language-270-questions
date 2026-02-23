#include<stdio.h>

void printN(int);
int main()
{
  int k;
  printf("Enter the value of n: ");
  scanf("%d",&k);
  printN(k);
  return 0;
}

void printN(int n)
{
  if(n>0)
  {
    printN(n-1); // 10-1
    printf("%d ",n); //10
  }
  


}
// completed