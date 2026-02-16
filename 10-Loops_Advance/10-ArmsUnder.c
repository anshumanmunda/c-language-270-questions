// Write a program to print all Armstrong numbers under 1000.
#include<stdio.h>
#include<math.h>
int main()
{
  int i;

  for(i=1;i<=1000; i++)
  {
    
  int temp=i, t, count = 0;
  float arm = 0.0;
   
   t=temp;
    while(t){  
      count++; 
      t/=10; 
     }
     
     t = temp;  
    
      while(t)
      {
        int digit = t%10;
        arm += pow(digit,count); //    pow fx returns double
        t/=10; 
      }
      if( (int)arm == temp)
        printf("%d ",temp);
  }
  return 0;  
}

