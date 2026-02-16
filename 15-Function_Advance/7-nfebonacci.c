#include<stdio.h>

void fibo(int);

int main()
{
  int n;
  printf("Enter (n)th term of Fibonacci serise: ");
  scanf("%d",&n); 
  fibo(n);
  
  return 0;
}

void fibo(int n)
{
  int i, first=-1, next=1, temp;  // 0 1 1 2 3 5 8 13
  for(i=1;  ; i++)
  {
    temp=first+next;
    if(n==i)
    {
      printf("%d ",temp);
      break;
    }
    first = next;
    next = temp;
  }


}