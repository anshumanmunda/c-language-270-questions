//Write a program to print all Prime numbers between two given numbers.

#include<stdio.h>
int main()
{
  int a,b,i;
  printf("Enter range of Prime number(a-b): "); 
  scanf("%d %d",&a,&b);

  for(a; a<=b; a++)  //5-10
  {
     for(i=2; i<=a; i++)
     {
      if(a%i == 0)
      break;
     }
   ( (a==i)?printf("%d ",a):printf("") );

  }
  
  return 0;
}








/*
#include<stdio.h>
int main()
{
  int a,b,i;
  printf("Enter range of Prime number(a-b): "); 
  scanf("%d %d",&a,&b);

  for(a; a<=b; a++)  //5-10
  {
     for(i=2; i<=a; i++)
     {
      if(a%i == 0)
      break;
     }
   ( (a==i)?printf("%d ",a):printf("") );

  }
  
  return 0;
}
*/


