//Print all prime number under 100.
#include<stdio.h>
int main()
{
  int i, n=2;
  printf("Prime number under 100:\n "); 

  while(n<=97)
  {
    for(i=2; i<=n; i++){
      if(n%i == 0)
      break;
    }
    (i == n)?printf("%d ",n):printf("");
    n++;
  }
  
  return 0;
}




