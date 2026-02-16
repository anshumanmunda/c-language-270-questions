//Write a program to print next  Prime numbers given by user.
#include<stdio.h>
int main ()
{
  int n,i,k=2;
  printf("Enter a Prime Number: ");  //7 ----> 11
  scanf("%d",&n);

  for(n+=1; ; n++)
  {
    for(i=2; i<n; i++)
      {
        if(n%i==0)
         break;
      }
    if(i==n)  
    {
      printf("Next Prime = %d",i);
      break;
        
    }
}
    
  return 0;
}  