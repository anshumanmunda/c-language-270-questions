#include<stdio.h>
int main()
{
  int n;
  printf("Enter your Marks out of 100: ");
  scanf("%d",&n);
  
  switch(n)
  {
    case 90 ... 100:
    printf("GRADE A");
    break;

    case 80 ... 89:
    printf("Better B");
    break;
    
    case 70 ... 79:
    printf("GRADE C");
    break;

    case 60 ... 69:
    printf("GRADE D");
    break;
    
    case 50 ... 59:
    printf("GRADE E");
    break;

    case 0 ... 49:
    printf("FAIL !");
    break;
    
    default :
    printf("INVALID MARKS !");
    break;
  }
  
  return 0;
} 