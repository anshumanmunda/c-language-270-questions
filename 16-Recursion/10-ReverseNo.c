#include<stdio.h>

void reverse(int);

int main()
{
  int k;
  printf("Enter a decimal number: ");
  scanf("%d",&k);
  reverse(k);
  return 0;
}

void reverse(int n)
{
  if(n)
  {
    printf("%d",n%10);
    reverse(n/10); 
  }

}