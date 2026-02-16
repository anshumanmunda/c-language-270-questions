

#include<stdio.h>

int main()
{
  int i,j,k=1;
  // char ch = 'A';

  
  for(i=1; i<=5; i++)
  {
      for(j=1; j<=5 ;j++)
      {
        if(j>=i)
          printf("%c",64+j); 
        else
        printf(" ");
     }
      printf("\n");
      // ch = ch-j+i+1; 
  }  
  return 0; 
}