#include<stdio.h>

int main ()
{
  int a, b, i=1, temp,L;
  printf("Enter two number: ");
  scanf("%d %d",&a, &b); // 4  6

  temp = (a>b)?a:b;
 
  for(L= temp; L<=a*b; L+=temp ){
    if(L%a == 0 && L%b == 0){
     printf("LCM = %d",L);
     break;
    }
  
  }

  return 0;
}