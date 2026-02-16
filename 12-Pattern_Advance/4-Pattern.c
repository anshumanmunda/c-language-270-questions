/*
*******
 ***** 
  ***  
   * 
*/

#include<stdio.h>

int main()
{
  int i,j,k=1;
  
  for(i=1; i<=4; i++)
  {

      for(j=1; j<=7 ;j++)
      { 
        if(j>=5-i && j<=3+i)
        {
          if(j==5){
            
            printf("%d",k);
            k--;
          }
           
          printf("%d",k); // j ==4 ----> 3
          k++;  // 4  

        }
        
         
        else
        printf(" ");
     }
     k=1;
      printf("\n");

  }  
  return 0; 
}